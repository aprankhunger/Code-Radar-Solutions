#include <stdio.h>

int main() {
    long a, rem = 0, bin = 0, place = 1;
    scanf("%ld", &a);
    
    if (a == 0) { 
        printf("0\n");
        return 0;
    }

    while (a > 0) { 
        rem = a % 2;
        a = a / 2;
        bin = bin + (rem * place);
        place = place * 10;
    }
    
    printf("%ld\n", bin);
    return 0;
}
