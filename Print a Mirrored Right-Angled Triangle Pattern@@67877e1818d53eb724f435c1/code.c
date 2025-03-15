#include <stdio.h>
int main(){
    int n;
    int s=n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<(s-2)){
                printf(" ");
            }
            else{
                printf("*");
            }
            
        }
        s--;
        printf("\n");
    }
}