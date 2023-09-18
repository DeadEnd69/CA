#include <stdio.h>
#include <string.h>

// Function to add two binary strings
char *addBinary(char *a, char *b)
{
    int len1 = strlen(a);
    int len2 = strlen(b);
    int carry = 0;
    int maxSize = len1 > len2 ? len1 : len2;
    char result[maxSize + 2]; // +2 for the potential carry and null terminator
    int index = 0;

    // Add binary digits from right to left
    for (int i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry > 0; i--, j--)
    {
        int bitA = i >= 0 ? a[i] - '0' : 0;
        int bitB = j >= 0 ? b[j] - '0' : 0;
        int sum = bitA + bitB + carry;

        result[index] = sum % 2 + '0'; // Convert sum to character '0' or '1'
        carry = sum / 2;
        index++;
    }

    result[index] = '\0'; // Null-terminate the result string

    // Reverse the result string
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

    return strdup(result); // Return a dynamically allocated copy of the result
}

int main()
{
    char binary1[100], binary2[100];

    printf("Enter the first binary number: ");
    scanf("%s", binary1);

    printf("Enter the second binary number: ");
    scanf("%s", binary2);

    char *sum = addBinary(binary1, binary2);

    printf("Sum of %s and %s is %s\n", binary1, binary2, sum);
    printf("\n\nProgram by Animesh Acharya\t Roll no.:VCIT03 Computer Architecture");

    return 0;
}
