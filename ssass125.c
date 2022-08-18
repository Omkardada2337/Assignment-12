// 5. Write a recursive function to print first N even natural numbers
void printevenN(int);
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int N;
    system("cls");

    printf("Enter the value of N : ");
    scanf("%d", &N);
    printevenN(N);
    getch();
    return 0;
}
void printevenN(int n)
{
    if (n >= 1)
    {
        printevenN(n - 1);
        printf("%d ", 2 * n );
        return n;
    }
}