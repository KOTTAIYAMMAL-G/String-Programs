#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "swiss";
    int count[256] = {0};
    int i;

    for (i = 0; i < strlen(str); i++)
    {
        count[(unsigned char)str[i]]++;
    }

    for (i = 0; i < strlen(str); i++)
    {
        if (count[(unsigned char)str[i]] == 1)
        {
            printf("First Non-Repeating Character: %c", str[i]);
            return 0;
        }
    }

    printf("-1");

    return 0;
}