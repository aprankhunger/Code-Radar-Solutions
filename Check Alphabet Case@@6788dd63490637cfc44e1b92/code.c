#include <stdio.h>


int main() {
    char a;
    scanf("%c",&a);
    if (a>=65 && a<=90){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
    return 0;
}