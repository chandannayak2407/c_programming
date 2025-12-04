//Check vowel or consonant.

#include <stdio.h>
#include <math.h>

int main() {
    char ch;
    printf("Enter the character : ");
    scanf("%c",&ch);
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("\nVowel");
    }
    else
    {
        printf("\nConsonant");
    }
    return 0;
}
