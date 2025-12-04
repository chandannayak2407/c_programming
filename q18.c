//Character type check: alphabet, digit, or special character.

#include <stdio.h>
#include <math.h>

int main() {
    char ch;
    printf("Enter the character : ");
    scanf("%c",&ch);
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
    {
        printf("Alphabet");
    }
    else if(ch>='0' && ch<='9')
    {
        printf("Digit");
    }
    
    else
    {
        printf("Special Character");
    }
    return 0;
}
