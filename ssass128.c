// 8. Write a recursive function to print binary of a given decimal number
void dectobin(int);
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int dec;
    system("cls");

    printf("Enter the decimal number : ");
    scanf("%d", &dec);
    printf("\nBinary is :");
    dectobin(dec);
    getch();
    return 0;
}

void dectobin(int d)
{
    if (d > 0)
    {
        dectobin(d / 2);
        printf(" %d ", d % 2);
    }
}