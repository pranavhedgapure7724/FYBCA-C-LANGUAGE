/* SET A - Q3: Digit check */

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9')
        printf("Character is a Digit");
    else
        printf("Character is not a Digit");

    return 0;
}

