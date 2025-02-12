#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    for (int i = a; i > 0; i--) { 
        // Print stars in a single statement
        for (int j = 0; j < i; j++) 
            putchar('*'), putchar(' '); 
        
        putchar('\n'); // Print newline
    }

    return 0;
}
