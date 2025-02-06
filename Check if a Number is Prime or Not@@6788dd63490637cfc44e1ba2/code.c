#include <stdio.h>

int main() {
    int a;
    int count = 0;
    scanf("%d",&a);
    for(int i = 2;i<a;i++){
        if(a%i==0){
            count++;
            
        }
    }
    if (count>0){
        printf("Not Prime");
    }else{
        printf("Prime");
    }
    return 0;
}