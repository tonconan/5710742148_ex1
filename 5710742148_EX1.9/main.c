#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%-10d\n", 10000);//false
    printf("%c\n", "This is a string");//false
    printf("%*.*lf\n", 8, 3, 1024.987654);//true
    printf("% ld\n%+ld\n", 1000000, 1000000);//true
    printf("%10.2E\n", 444.93738);//true
    printf("%d\n", 10.987);//false
    return 0;
}
