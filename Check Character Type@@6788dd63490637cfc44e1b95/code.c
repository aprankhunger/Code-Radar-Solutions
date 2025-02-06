#include <stdio.h>

int main() {
    char b;
    scanf("%c",&b);
    if (b == 'a'||b=='e'||b=='i'||b=='o'||b=='u'||b == 'A'||b=='E'||b=='I'||b=='O'||b=='U'){
        printf("Vowel");
    }
    else if( (b >= 33 && b<=47)||(b >= 58 && b<=64) ){
        printf("Special Character");
    }
    else if(b>=48 && b<=57){
        printf("Digit");
    }
    else{
        printf("Consonant");
    }
    return 0;
}