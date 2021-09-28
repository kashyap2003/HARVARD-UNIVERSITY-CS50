#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int height;
  int spaces;
  int hash;

do
{
    height = get_int("Height: ");
}
while (height < 0 || height > 23);


for (int i = 0; i < height; i++)
{
    // For loop to print out the spaces
    for (spaces = (height - i); spaces >= 1; spaces--)
    {
        printf(" ");

    }
    // For loop to print out hashes
    for (hash = 0; hash <= (i ); hash++)
    {
        printf("#");
    }
    printf("\n");
}
}