#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int i = get_int("i: ");
    int k = get_int("k: ");

    if (i == k)
    {
        printf ("same\n");
    }
    else
    {
        printf ("different\n");
    }
}