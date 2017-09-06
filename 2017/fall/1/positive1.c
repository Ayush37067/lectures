// Demonstrates abstraction.

#include <cs50.h>
#include <stdio.h>

int get_positive_int(string prompt);

int main(void)
{
    int i = get_positive_int("positive integer, please: ");
    printf("%i\n", i);
}

int get_positive_int(string prompt)
{
    int n;
    do
    {
        n = get_int(prompt);
    }
    while (n < 1);
    return n;
}
