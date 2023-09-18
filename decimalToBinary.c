#include <stdio.h>
#include <math.h>
#include <string.h>
void main()
{
    int decimal, i = 0, state;
    char binary[50], temp[50];
    printf("Enter the decimal value:");
    scanf("%d", &decimal);
    state = decimal;
    while (decimal != 0)
    {
        temp[i] = (char)(decimal % 2 + 48);
        i++;
        decimal /= 2;
    }
    temp[i] = '\0';
    strcpy(binary, temp);
    strrev(binary);
    printf("%d -> %s", state, binary);
}