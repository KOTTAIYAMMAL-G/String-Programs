#include <stdio.h>
#include <string.h>

int palindrome(char str[], int start, int end)
{
    while (start < end)
    {
        if (str[start] != str[end])
            return 0;

        start++;
        end--;
    }

    return 1;
}

int main()
{
    char str[] = "babad";
    char longest[100] = "";
    int i, j, len;

    for (i = 0; i < strlen(str); i++)
    {
        for (j = i; j < strlen(str); j++)
        {
            if (palindrome(str, i, j))
            {
                len = j - i + 1;

                if (len > strlen(longest))
                {
                    strncpy(longest, str + i, len);
                    longest[len] = '\0';
                }
            }
        }
    }

    printf("Longest Palindromic Substring: %s", longest);

    return 0;
}