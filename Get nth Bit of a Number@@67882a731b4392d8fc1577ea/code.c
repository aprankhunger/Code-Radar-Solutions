#include <stdio.h>

int main() {
    int a,b,rem=0,place=1,bin=0,c;
    scanf("%d %d",&a,&b);
    c=((a>>b) &1);
    printf("%d",c);
    return 0;
}