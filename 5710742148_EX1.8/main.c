#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int a,b,x;
    printf("High: ");
    scanf("%d",&a);
    printf("Wide: ");
    scanf("%d",&b);
    x = (a*b)/2;
    printf("Sum: %d",x);
    getch();
    return 0;
}
