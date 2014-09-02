#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int a,b,c,x;
    printf("Input 3 Number: ");
    scanf("%d %d %d",&a,&b,&c);
    x = (a+b+c)/3;
    printf("Sum: %d",x);
    getch();
    return 0;
}
