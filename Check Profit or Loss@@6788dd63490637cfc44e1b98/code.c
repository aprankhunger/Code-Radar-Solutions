#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d");
    if (a<b){
        printf("Profit");
    }else if(b<a){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}