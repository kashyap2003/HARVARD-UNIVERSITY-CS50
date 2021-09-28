#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (void)
{
    string names[] = {"kashyap", "vinay"};
    string numbers[] = {"+91-7030374909", "+91-9422909246"};

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(names[i], "kashyap") == 0)
        {
            printf ("found%s\n", numbers[i]);
            return 0;
        }
    }
    printf ("not found\n");
    return 1;
}
