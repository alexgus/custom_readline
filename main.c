#include "header.h"

char *readline(const char* prompt);

char *ft_lstgetstr(SentenceChar *list)
{
    char    *str;
    int     i;

    i = 0;
    if ((str = (char *)malloc(sizeof(char) * (ft_lst_size(list) + 1))) == NULL)
        return (NULL);
    while (list != NULL)
    {
        str[i++] = list->c;
        list = list->next;
    }
    str[i] = 0;
    return (str);
}

int ft_lstprint(SentenceChar *str)
{
    while (str != NULL)
    {
        putchar(str->c);
        str = str->next;
    }
    putchar('\n');
    return (0);
}

int main()
{
    char* result;
    const char* test = "Please enter your name then press enter: \n";
    result = readline(test);
    printf("Your name is : %s\n", result);
    return (0);
}


char *readline(const char *prompt)
{
    char            c;
    int             i;
    SentenceChar    *str;
    
    str = NULL;
    while (*prompt)
    {
        putchar(*prompt);
        prompt++;
    }
    c = getchar();
    while (c != 10){
        if (str == NULL)
            str = ft_lstnew(c, 0);
        else
        {
            ft_lst_push_tail(&str, ft_lstnew(c, i));
        }
        c = getchar();
        i++;
    }
    //printf("%d\n", ft_lst_size(str));
    //ft_lstprint(str);
    return (ft_lstgetstr(str));
}