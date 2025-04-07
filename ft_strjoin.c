#include <stdlib.h>

char    *ft_strjoin(char const *s1, char const *s2)
{
    char *joinedstr;
    size_t size;
    size_t  i;
    size_t j;
    const char *p1;
    const char *p2;

    p1 = s1;
    p2 = s2;
    size = 0;
    i = 0;
    j = 0;
    while (*p1++)
        size++;
    while (*p2++)
        size++;
    joinedstr = malloc((size + 1) * sizeof(char));
    if (!joinedstr)
        return (NULL);
    while (s1[i] != '\0')
    {
        joinedstr[i] = s1[i];
        i++;
    }
    while (s2[j] != '\0')
    {
        joinedstr[i] = s2[j];
        i++;
        j++;
    }
    joinedstr[i] = '\0';
    return (joinedstr);
}

#include <stdio.h>
int main()
{
    char s1[] = "Hello, World!";
    char s2[] = " This is joined string!";
    char *res = ft_strjoin(s1, s2);
    printf("%s\n", res);
}
