#include <stdio.h>
#include <string.h>

int main()
{
    char name[50], lname[50];
    int i;

    printf("Enter A Word: ");
    scanf("%s", name);

    printf("Palindrome: ");
    for (i = (strlen(name) - 1); i >= 0; i--)
        printf("%c", name[i]);
}