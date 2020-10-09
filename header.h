#include <stdio.h>
#include <stdlib.h>

typedef struct SentenceChar SentenceChar;
struct SentenceChar {
    char            c;
    int             i;
    SentenceChar*   next;
    SentenceChar*   prev;
};

SentenceChar	*ft_lstnew(char c, int i);
void	        ft_lst_push(SentenceChar **alst, SentenceChar *new);
void	        ft_lst_push_tail(SentenceChar **s, SentenceChar *new);
SentenceChar	*ft_lst_pop(SentenceChar **alst);
SentenceChar	*ft_lst_pop_tail(SentenceChar **alst);
int	            ft_lst_size(SentenceChar *s);