#include<stdio.h>

int main (void)
{
    float a;
    printf("a: ");
    scanf("%f", &a);

    float b;
    printf("b: ");
    scanf("%f", &b);

    float c;
    c = a / b;
    printf("%f", c);

    printf("\n");
}