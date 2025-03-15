#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i;i<n;i++){
        for(int j;j<n;j++){
            if(j>n-1){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
}