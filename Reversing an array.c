#include <stdio.h>

int main() 
{
    char A[100]; 
    int f = 0, i;

    while (f < 100 && (A[f] = getchar()) != EOF) {
        ++f;
    }

    A[f] = '\0';

    printf("Reversed array:");
    
    for (i = f - 1; i >= 0; --i) {
        printf("%c", A[i]);
    }

    return 0;
}
