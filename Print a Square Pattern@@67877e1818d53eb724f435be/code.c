#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = n;i<n;i++){
        for(int j = n;j<n;j++){
            printf("* ");
        }
        printf("\n");
    }
}