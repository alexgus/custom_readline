#include "header.h"

SentenceChar	*ft_lstnew(char c, int i)
{
	SentenceChar *new;

	if ((new = (SentenceChar *)malloc(sizeof(SentenceChar))) == NULL)
		return (NULL);
	new->c = c;
    new->i = i;
	
    new->next = NULL;
    new->prev = NULL;
	return (new);
}

void	ft_lst_push(SentenceChar **alst, SentenceChar *new)
{
	if (alst != NULL && new != NULL)
	{
		new->next = *alst;
		*alst = new;
	}
}

void	ft_lst_push_tail(SentenceChar **s, SentenceChar *new)
{
	SentenceChar *t;

	t = *s;
	if (t == NULL)
		*s = new;
	else
	{
		while (t->next != NULL)
			t = t->next;
		t->next = new;
	}
}

SentenceChar	*ft_lst_pop(SentenceChar **alst)
{
	SentenceChar	*elem;

	if (alst == NULL || *alst == NULL)
		return (NULL);
	elem = *alst;
	*alst = elem->next;
	return (elem);
}

SentenceChar	*ft_lst_pop_tail(SentenceChar **alst)
{
	SentenceChar	*elem;

	if (alst == NULL || *alst == NULL)
		return (NULL);
	else
	{
		elem = *alst;
		while (elem->next != NULL)
			elem = elem->next;
		*alst = elem->next;
	}
	return (elem);
}

int	ft_lst_size(SentenceChar *s)
{
	SentenceChar *t;
	int			i;

	t = s;
	if (t == NULL)
		return (0);
	i = 1;
	while (t->next != NULL)
	{
		t = t->next;
		i++;
	}
	return (i);
}