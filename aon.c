#include <stdio.h>
int main()
{
    char a;
    printf("Enter a character: ");
    scanf("%c",&a);
    if( (a>='a' && a<='z') || (a>='A' && a<='Z'))
        printf(" is an alphabet.");
    else
        printf(" not an alphabet.");
    return 0;
}
