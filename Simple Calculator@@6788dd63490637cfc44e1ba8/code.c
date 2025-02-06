#include <stdio.h>

int main() {
    int a, b;
    char c;
    
    printf("Enter expression (a operator b): ");
    scanf("%d %c %d", &a, &c, &b);

    switch (c) {
        case '+': printf("%d\n", a + b); break;
        case '-': printf("%d\n", a - b); break;
        case '*': printf("%d\n", a * b); break;
        case '/': 
            if (b == 0) 
                printf("Error: Division by zero\n");
            else 
                printf("%.2f\n", (float)a / b); 
            break;
        default: 
            printf("Invalid operator\n");
    }
    
    return 0;
}
