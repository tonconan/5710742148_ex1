#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int a;
    printf("Input a number: ");
    scanf("%d",&a);
    if(a%7 == 0)
    {
        printf("True");
    }
    if(a%7 !=0)
    {
        printf("False");
    }
    getch();
    return 0;
}
