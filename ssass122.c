// 2. Write a recursive function to print first N natural numbers in reverse order
void printN(long long int);
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    long long int N;
    system("cls");

    printf("Enter the value of N : ");
    scanf("%d", &N);
    printN(N);
    getch();
    return 0;
}
void printN(long long int n)
{
    if (n >= 1)
    {
        printf("%d ", n);
        printN(n - 1);
        return n;
    }
}