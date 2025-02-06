#include <stdio.h>


int main() {
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    switch(c){
        case '+':printf("%d",a+b);break;
        case '-':printf("%d",a-b);break;
        case '*':printf("%d",a*b);break;
        case '/':if (b == 0) 
                printf("Error: Division by zero\n");
            else 
                printf("%.2f\n", (float)a / b); 
            break;
    }
    return 0;
}