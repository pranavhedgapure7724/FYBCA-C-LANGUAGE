/* SET A - Q6: Vowel or Consonant */

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a lowercase character: ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf("Character is a Vowel");
    else
        printf("Character is a Consonant");

    return 0;
}

