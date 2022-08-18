// 1. Write a recursive function to print first N natural numbers
void printN(int);
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int N;
    system("cls");

    printf("Enter the value of N : ");
    scanf("%d", &N);
    printN(N);
    getch();
    return 0;
}
void printN(int n)
{
    if (n >= 1)
    {
        printN(n - 1);
        printf("%d ", n);
        return n;
    }
}