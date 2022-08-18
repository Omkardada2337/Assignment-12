// 10. Write a recursive function to print reverse of a given number
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int N;
    system("cls");

    printf("Enter the number : ");
    scanf("%d", &N);
    reverse(N);
    getch();
    return 0;
}

void reverse(int n)
{
    int sum = 0;
    if (n != 0)
    {
        printf("%d", (n % 10));
        reverse(n / 10);
    }
}