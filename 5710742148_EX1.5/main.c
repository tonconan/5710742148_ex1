#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char x;
    printf("Enter string: ");
    scanf("%c",&x);
    if(x!='\0')
    {
        if(x>='A'&&x<='Z')
        {
            printf("%c",tolower(x));
        }
        if(x>='a'&&x<='z')
        {
            printf("Wrong");
        }
    }
    if(x=='\0')
    {
        printf("Error");
    }
    getch();
    return 0;
}
