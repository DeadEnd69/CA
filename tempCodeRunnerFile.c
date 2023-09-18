#include <stdio.h>
#include <string.h>

char *computeTwosComplement(char *binary)
{
    int len = strlen(binary);
    int carry = 1;
    char result[len + 1];

    for (int i = len - 1; i >= 0; i--)
    {
        if (binary[i] == '0')
        {
            result[i] = carry + '0';
            carry = 0;
        }
        else
        {
            result[i] = '1' - carry;
        }
    }

    result[len] = '\0';

    return strdup(result);
}

int main()
{
    char binary[100];

    printf("Enter a binary number: ");
    scanf("%s", binary);

    char *twosComplement = computeTwosComplement(binary);

    printf("Two's complement of %s is %s\n", binary, twosComplement);

    printf("\n\nProgram by Animesh Acharya\t Roll no.:VCIT03 Computer Architecture");

    return 0;
}
