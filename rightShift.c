#include <stdio.h>
#include <string.h>

void circularRightShift(char *binary, int shift)
{
    int len = strlen(binary);
    char temp[len + 1];

    shift = shift % len;
    for (int i = 0; i < len; i++)
    {
        int newIndex = (i + shift) % len;
        temp[newIndex] = binary[i];
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

    printf("Enter the number of positions to circularly right shift: ");
    scanf("%d", &shift);

    circularRightShift(binary, shift);

    printf("Circularly right shifted binary: %s\n", binary);
    printf("\n\nProgram by Animesh Acharya\t Roll no.:VCIT03 Computer Architecture");
    return 0;
}
