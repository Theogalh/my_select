/*
** del_elem_list.c for del_elem_list in /home/bouill_t/git/mylib/lib/my
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Tue Dec  1 13:34:58 2015 Thomas Bouillon
** Last update Sun Dec 13 07:46:41 2015 Thomas Bouillon
*/

#include "mylist.h"

t_list		*del_elem_list(struct s_list *list, void *data)
{
  t_list	*firstelem;
  t_list	*nextelem;

  firstelem = list;
  while (list->data != data)
    list = list->next;
  nextelem = list->next;
  list = list->prev;
  list->next = nextelem;
  list = firstelem;
  return (list);
}
