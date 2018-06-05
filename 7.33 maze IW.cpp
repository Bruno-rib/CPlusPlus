#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

const int size = 19;
int a = 1;
int b = 0;

void create (int, int);
int y = 0;
int c;
const size_t rows = size;
const size_t columns = size;
array <array <int, columns>, rows> maze;
array <array <int, columns>, rows> dots;

void input (const array <array <int, columns>, rows> &);

void full ();

void solve ();
array <array <int, columns>, rows> solution;

void printArray (const array <array <int, columns>, rows> &);

int main()
{
    input (maze);
    
    maze [1][0] = 1;
    dots [1][0] = 1;
    create (1, 0);
    
    full (); //comment it out to see solution
    solve ();
    printArray (maze);
}

void solve () {
    int p = 1;
    int o = 0;
    
    for (int i = 0; i < 100; i++) {
        int z = 0;
        
        if (maze [p - 1][o] == 1) {z = 1; maze [p][o] ++;}
        if (maze [p][o + 1] == 1) {z = 2; maze [p][o] ++;}
        if (maze [p + 1][o] == 1) {z = 3; maze [p][o] ++;}
        if (maze [p][o - 1] == 1) {z = 4; maze [p][o] ++;}
        else if (maze [p][o] == 1) {maze [p][o] ++;}
        
        while (z == 0) {
            for (int k = 0; k < rows; k++) {
                for (int j = 0; j < columns; j++) {
                    if (maze [k][j] > 2) {
                        
                        if (maze [k - 1][j] == 1) {z = 1;}
                        if (maze [k][j + 1] == 1) {z = 2;}
                        if (maze [k + 1][j] == 1) {z = 3;}
                        if (maze [k][j - 1] == 1) {z = 4;}
                        
                        if (z > 0) {
                            p = k;
                            o = j;
                        }
                        
                    }
                }
            }
        }
        
        switch (z) {
            case 1: p--; break;
                    
            case 2: o++; break;
                    
            case 3: p++; break;
                    
            case 4: o--; break;
                    
        }
    }
}

void full () {
    for (int i = 1; i < rows - 1; i++) {
        for (int j = 1; j < columns - 1; j++) {
            create (i, j);
        }
    }
}

void create (int m, int n) {
    
    a = m;
    b = n;
    
    for (int j = 0; j < 20; j++) {
        int x = 0;
        int stop = 0;
        
        if (j != 0) {
            for ( size_t i = rows; i > 0; --i ) {
                for ( size_t j = columns; j > 0; --j ) {
                    if (dots[ i ][ j ] == 1 && x == 0) {
                        a = i;
                        b = j;
                        x = 1;
                        if (a == rows - 2 && y == 0) {
                            maze [a + 1][b] = 1;
                            y = 1;
                        }
                    }
                }
            }
        }
    
        while (stop < 30) {
            c = rand () % 4;
            switch (c) {
                case 0: if (a < 2) {stop++;break;}
                        if (maze [a - 1][b + 1] == 1 || maze [a - 1][b - 1] == 1 || maze [a - 2][b] == 1 
                        || maze [a - 2][b - 1] == 1 || maze [a - 2][b + 1] == 1) {stop++;break;}
                        a--;
                        maze [a][b] = 1;
                        dots [a][b] = 1;
                        stop = 0;
                        break;
                case 1: if (a == rows - 2) {stop++;break;}
                        if (maze [a + 1][b - 1] == 1 || maze [a + 1][b + 1] == 1 || maze [a + 2][b] == 1
                        || maze [a + 2][b - 1] == 1 || maze [a + 2][b + 1] == 1) {stop++;break;}
                        a++;
                        maze [a][b] = 1;
                        dots [a][b] = 1;
                        stop = 0;
                        break;
                case 2: if (b < 2)  {stop++;break;}
                        if (maze [a][b - 2] == 1 || maze [a - 1][b - 1] == 1 || maze [a + 1][b - 1] == 1
                        || maze [a + 1][b - 2] == 1 || maze [a - 1][b - 2] == 1)  {stop++;break;}
                        b--;
                        maze [a][b] = 1;
                        dots [a][b] = 1;
                        stop = 0;
                        break;
                case 3: if (b == columns - 2)  {stop++;break;}
                        if (maze [a - 1][b + 1] == 1 || maze [a + 1][b + 1] == 1 || maze [a][b + 2] == 1
                        || maze [a + 1][b + 2] == 1 || maze [a - 1][b + 2] == 1)  {stop++;break;}
                        b++;
                        maze [a][b] = 1;
                        dots [a][b] = 1;
                        stop = 0;
                        break;
            }
            
        }
    }
}

void input (const array <array <int, columns>, rows> & a) {
    for (int i {0}; i < rows; i++) {
        for (int j {0}; j < columns; j++) {
            maze [i][j] = 0;
        }
    }
}

void printArray (const array <array <int, columns>, rows> & a) {
    for (int i{0}; i < rows; i++) {
        for (int j{0}; j < columns; j++) {
            if (maze [i][j] == 0) {cout << '#' << ' ';}
            else if (maze [i][j] == 1) {cout << '.' << ' ';}
            else if (maze [i][j] == 2) {cout << 'o' << ' ';}
            else if (maze [i][j] > 2) {cout << '&' << ' ';}
        }
            
        cout << endl;
    }
}





