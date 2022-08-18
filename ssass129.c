// 9. Write a recursive function to print octal of a given decimal number
void dectooct(int);
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int dec;
    system("cls");

    printf("Enter the decimal number : ");
    scanf("%d", &dec);
    dectooct(dec);
    getch();
    return 0;
}

void dectooct(int d)
{
    if (d > 0)
    {
        dectooct(d / 8);
        printf("%d ", d % 8);
    }
}