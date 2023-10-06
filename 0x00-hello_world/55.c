include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Description:
 *
 * Return: Always 0 when success
*/

int main(void)
{
        printf("Size of a char: %lu byte\n", sizeof(char));
        printf("Size of an int: %lu bytes\n, sizeof(int));
        printf("Size of a long int: %lu bytes\n", sizeof(long));
        printf("Size of a long long int %lu byte\n", sizeof(long long));
        printf("Size of a float: %lu byte\n", sizeof(float));

        return (0);
}

