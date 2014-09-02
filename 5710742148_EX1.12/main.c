#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s;
    int t;

    printf("Please Enter Salary\n");
    scanf("%d",&s) ;
    t = s*0.1 ;
    printf("Salary = %d\n",s);
    printf("Tax = %d\n",t);
    return 0;
}
