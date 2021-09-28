#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main ()
{
    string names[] = {"Bill", "Charlie", "Fred", "George", "Ginny", "Percy", "Ron"};

    for (int i = 0; i < 7; i++)
    {
        if (strcmp(names[i], "RON") == 0)
        {
            printf ("found\n");
            return 0;
        }
    }
    printf ("not found\n");
    return 1;
}