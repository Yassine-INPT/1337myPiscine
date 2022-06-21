#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *ft_strdup(char *src)
{
    int i;
    
    i = 0;
    while (src[i])
        i++;
    char *dup = (char *)malloc((i + 1) * sizeof(char));
    if(!dup)
        return (0);
    i = 0;
    while (src[i])
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}


int main()
{
    char *p1 = "Yassine";
    char *p2;
    
    p2 = ft_strdup(p1);
    printf("%s\n", p2);

    return 0;
}