// Write a C program to check whether an alphabet is vowel or consonant using switch case.
#include <stdio.h>

int main()
{
    char ch;

    printf("\nEnter any alphabet: ");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("Vowel\t");
        break;
    default:
        printf("Consonant\t");
    }

    return 0;
}