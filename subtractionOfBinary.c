#include <stdio.h>
#include <string.h>

char *subtractBinary(char *a, char *b)
{
    int len1 = strlen(a);
    int len2 = strlen(b);
    int borrow = 0;
    int maxSize = len1 > len2 ? len1 : len2;
    char result[maxSize + 1];
    int index = 0;

    for (int i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--)
    {
        int bitA = i >= 0 ? a[i] - '0' : 0;
        int bitB = j >= 0 ? b[j] - '0' : 0;
        int diff = bitA - bitB - borrow;

        if (diff < 0)
        {
            diff += 2;
            borrow = 1;
        }
        else
        {
            borrow = 0;
        }

        result[index] = diff + '0';
        index++;
    }

    result[index] = '\0';

    int start = 0;
    int end = index - 1;
    while (start < end)
    {
        char temp = result[start];
        result[start] = result[end];
        result[end] = temp;
        start++;
        end--;
    }

    int leadingZeros = 0;
    while (result[leadingZeros] == '0')
    {
        leadingZeros++;
    }

    if (leadingZeros == index)
    {
        return strdup("0");
    }
    else
    {
        return strdup(result + leadingZeros);
    }
}

int main()
{
    char binary1[100], binary2[100];
    printf("Enter the first binary number: ");
    scanf("%s", binary1);
    printf("Enter the second binary number: ");
    scanf("%s", binary2);
    char *difference = subtractBinary(binary1, binary2);
    printf("Difference of %s and %s is %s\n", binary1, binary2, difference);
    printf("\n\nProgram by Animesh Acharya\t Roll no.:VCIT03 Computer Architecture");

    return 0;
}
