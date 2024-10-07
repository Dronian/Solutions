#include <stdio.h>
#define MAX 256 

int main() 
{
    int charc[MAX] = {0}; 
    int qc;
    
    while ((qc = getchar()) != '\n') { //Если EOF, вместо '\n', то выводит вхождение EOF?
         if (qc >= 'A' && qc <= 'Z') {
            qc = qc - 'A' + 'a';
        }
        ++charc[qc];
    }

    for (int i = 0; i < MAX; ++i) {
        if (charc[i] > 0) {
            printf("%c: %d\n", i, charc[i]);
        }
    }

    return 0;
}
