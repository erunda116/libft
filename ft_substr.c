#include <stdlib.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substring;
    size_t i;

    i = 0;
    substring = malloc((len + 1) * sizeof(char));
    if (!substring)
        return (NULL);
    while (len > 0)
    {
        substring[i] = s[start];
        start++;
        len--;
        i++;
    }
    substring[i] = '\0';
    return (substring);
}

#include <stdio.h>
int main()
{
    char s[] = "Hello, World!";
    char *sub = ft_substr("Hello, world!", 7, 5);
    printf("%s\n", sub);
}
