// 3. Write a recursive function to print first N odd natural numbers
void printoddN(int);
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int N;
    system("cls");

    printf("Enter the value of N : ");
    scanf("%d", &N);
    printoddN(N);
    getch();
    return 0;
}
void printoddN(int n)
{
    if (n >= 1)
    {
        printoddN(n - 1);
        printf("%d ", 2*n-1);
        return n;
    }
}