#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "programming";
    int visited[256] = {0};
    int i;

    printf("After Removing Duplicates: ");

    for (i = 0; i < strlen(str); i++)
    {
        if (visited[(unsigned char)str[i]] == 0)
        {
            printf("%c", str[i]);
            visited[(unsigned char)str[i]] = 1;
        }
    }

    return 0;
}