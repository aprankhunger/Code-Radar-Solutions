#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    a = a/10;
    switch(a){
        case 10:
        case 9:printf("A");break;
        case 8:printf("B");break;
        case 7:printf("c");break;
        case 6:printf("D");break;
        default: printf("F");
    }
    return 0;
}