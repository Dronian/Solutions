#include <stdio.h>

void bubbleSort(char A[], int f) {
    int i, j;
    char v;

    for (i = 0; i < f - 1; i++) {
        for (j = 0; j < f - i - 1; ++j) {
            if (A[j] > A[j + 1]) {
                v = A[j];
                A[j] = A[j + 1];
                A[j + 1] = v;
            }
        }
    }
}

int main() 
{
    char A[100]; 
    int f = 0;

    while (f < 100 && (A[f] = getchar()) != EOF) {
        ++f;
    }

    A[f] = '\0';

    bubbleSort(A, f);

    printf("Sorted array:");
    for (int i = 0; i < f; ++i) {
        printf("%c", A[i]);
    }
    return 0;
}





