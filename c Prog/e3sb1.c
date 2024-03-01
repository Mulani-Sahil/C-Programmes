#include <stdio.h>

int main()
 {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    int ascii_value = (int)character;

    if (ascii_value >= 48 && ascii_value <= 57) 
    {
        printf("'%c' is a digit.\n", ch);
    } 
    else if (ascii_value >= 97 && ascii_value <= 122)
    {
        printf("'%c' is a lowercase alphabet.\n", ch);
    } 
    else if (ascii_value >= 65 && ascii_value <= 90) 
    {
        printf("'%c' is an uppercase alphabet.\n", ch);
    } 
    else 
    {
        printf("'%c' is not a digit or an alphabet character.\n", ch);
    }

    return 0;
}

