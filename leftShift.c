#include <stdio.h>
#include <string.h>

void circularLeftShift(char *binary, int shift)
{
    int len = strlen(binary);
    char temp[len + 1];

    shift = shift % len;

    for (int i = 0; i < len; i++)
    {
        int newIndex = (i + shift) % len;
        temp[i] = binary[newIndex];
    }

    temp[len] = '\0';
    strcpy(binary, temp);
}

int main()
{
    char binary[100];
    int shift;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    printf("Enter the number of positions to circularly left shift: ");
    scanf("%d", &shift);

    circularLeftShift(binary, shift);

    printf("Circularly left shifted binary: %s\n", binary);
    printf("\n\nProgram by Animesh Acharya\t Roll no.:VCIT03 Computer Architecture");

    return 0;
}
