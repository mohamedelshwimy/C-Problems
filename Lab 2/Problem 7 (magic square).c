#include <stdio.h>
#include <windows.h>
int get_row_col(int row,int col);
void main(void){
    get_row_col(50,10);
    printf("Hello");
}

int get_row_col(int col,int row)
{
    COORD c;
    c.X = col;
    c.Y = row;

    SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), c);
}
