/*
** my_put_in_list.c for my_put_in_list in /home/bouill_t/git/mylib/lib/my
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Tue Nov  3 18:45:41 2015 Thomas Bouillon
** Last update Sun Dec 13 06:55:03 2015 Thomas Bouillon
*/

#include <stdlib.h>
#include "mylist.h"

void		*my_put_in_list(struct s_list **list, char *voidata)
{
  struct s_list	*elem;
  struct s_list *first;

  if ((elem = malloc(sizeof(t_list))) == NULL)
    return (NULL);
  if ((*list)->next != NULL)
    elem->prev = *list;
  elem->data = voidata;
  elem->next = *list;
  elem->select = 0;
  elem->prev = NULL;
  *list = elem;
  if ((*list)->next != NULL)
    (*list)->next->prev = *list;
}


void		*addlist(t_ctrl *list, void *data)
{
  t_list	*new;
  t_list	*elem;

  new = malloc(sizeof(t_list));
  new->data = data;
  if (list->first == NULL)
    {
      list->first = new;
      list->first->next = NULL;
      list->last = new;
      list->last->next = NULL;
    }
  else
    {
      elem = list->first;
      while (elem->next != NULL)
      	elem = elem->next;
      new->prev = list->last;
      list->last = new;
      elem->next = list->last;
    }
  return (NULL);
}

