include <stdio.h>
int main()
{
    int b, e;

    long long r = 1;

    printf("Enter a base number: ");
    scanf("%d", &b);

    printf("Enter an exponent: ");
    scanf("%d", &e);

    while (e != 0)
    {
        r *= b;
        --e;
    }

    printf("Answer = %lld", r);

    return 0;
}
