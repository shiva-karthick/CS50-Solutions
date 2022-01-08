// Stores and prints a string's address via pointer arithmetic

#include <stdio.h>

int main(void)
{
    char *s = "HI!";
    printf("%c\n", *s);
    printf("%c\n", *(s + 1));
    printf("%c\n", *(s + 2));
    printf("%c\n", *(s + 3));
    printf("%c\n", *(s + 4));
    printf("%c\n", *(s + 5));
    printf("%c\n", *(s + 6));
    printf("%c\n", *(s + 7));
}
