#include <stdio.h>
int main()
{
    char c;
    int Low,Up;
    printf("Enter an alphabet: ");
    scanf("%c",&c);
    Low = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    Up = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (Low || Up)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}
