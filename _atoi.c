#include <stdio.h>
#include <string.h>

/**
 * is_vowel - checks if a character is a vowel
 * @c: the character to check
 * Return: 1 if it's a vowel, 0 otherwise
 */
int is_vowel(char c)
{
    char vowels[] = "AEIOUaeiou";
    return strchr(vowels, c) != NULL;
}

/**
 * reverse_string - reverses a given string
 * @str: the string to reverse
 */
void reverse_string(char *str)
{
    int len = strlen(str);
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main()
{
    char input[100];
    
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    
    // Remove the trailing newline character
    if (input[strlen(input) - 1] == '\n') {
        input[strlen(input) - 1] = '\0';
    }

    printf("You entered: %s\n", input);
    
    printf("Reversed string: ");
    reverse_string(input);
    printf("%s\n", input);

    printf("Vowels in the string: ");
    for (int i = 0; i < strlen(input); i++) {
        if (is_vowel(input[i])) {
            printf("%c ", input[i]);
        }
    }
    printf("\n");

    return 0;
}
