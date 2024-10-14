#include <stdio.h>

int greatComdiv(int a, int b)
{
    if (b == 0) {
        return a;
    } else {
        return greatComdiv(b, a % b);
    }
}

int main()
{
    int y, z, gcd;

    scanf("%d %d", &y, &z);

    gcd = greatComdiv(y, z);

    printf("%d\n", gcd);

    return 0;
}




