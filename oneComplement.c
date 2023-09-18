#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "1000";
    int len = strlen(str1), temp, i = 0;
    char comp[len + 1];
    while (i < len)
    {
        temp = '1' - str1[i];
        comp[i] = (char)(temp + '0');
        i++;
    }
    comp[len] = '\0';
    printf("The complement of %s is %s\n", str1, comp);
    printf("\n\nProgram by Animesh Acharya\t Roll no.:VCIT03 Computer Architecture");

    return 0;
}
