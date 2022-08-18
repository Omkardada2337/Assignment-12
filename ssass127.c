// 7. Write a recursive function to print squares of first N natural numbers
void squareN(int);
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int N;
    system("cls");

    printf("Enter the value of N : ");
    scanf("%d", &N);
    squareN(N);
    getch();
    return 0;
}
void squareN(int n)
{
    if (n >= 1)
    {
        squareN(n - 1);
        printf("%d ", n*n);
        return n;
    }
}