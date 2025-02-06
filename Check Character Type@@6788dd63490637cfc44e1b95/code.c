#include <stdio.h>

int main() {
    char b;
    scanf("%c",&b);
    if (b == 'a'||b=='e'||b=='i'||b=='o'||b=='u'){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
    return 0;
}