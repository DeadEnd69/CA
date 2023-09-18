#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    char c[] = "10";

    int len = strlen(c), sum = 0, n;

    for (int i = 0; i < len; i++)
    {
        n = (c[i] == 49) ? 1 : 0;
        sum += n * pow(2, len - i - 1);
    }
    printf("%s -> %d", c, sum);

    return 0;
}