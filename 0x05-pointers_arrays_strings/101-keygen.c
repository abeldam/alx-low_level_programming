include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for 101-crackme
 *
 * Return: Always 0.
 */
int main(void)
{
    char password[7];
    int i, ascii_val;

    srand(time(NULL)); /* Initialize random number generator */

    for (i = 0; i < 6; i++)
    {
        /* Generate random ASCII value within the valid range */
        ascii_val = rand() % (126 - 33 + 1) + 33;
        password[i] = (char)ascii_val;
    }

    password[6] = '\0'; /* Add null terminator to end of password */

    printf("%s\n", password);

    return (0);
}
