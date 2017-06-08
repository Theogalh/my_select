/*
** remove.c for remove in /home/bouill_t/git/PSU_2015_my_select
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Sun Dec 13 02:23:41 2015 Thomas Bouillon
** Last update Sun Dec 13 07:52:58 2015 Thomas Bouillon
*/

#include <stdlib.h>
#include "my_select.h"
#include "my.h"
#include "mylist.h"

t_mysel		*remove_elem(t_mysel *all)
{
  t_list	*tmp;

  tmp = NULL;
  if (all->first == all->list)
    {
      tmp = all->list->prev;
      all->list = all->list->next;
      all->list->prev = tmp;
      tmp = all->list;
      all->list = all->list->prev;
      all->list->next = tmp;
      all->list = all->list->next;
      all->first = all->list;
    }
  else
    {
      tmp = all->list->prev;
      all->list = all->list->next;
      all->list->prev = tmp;
      tmp = all->list;
      all->list = all->list->prev;
      all->list->next = tmp;
      all->list = all->list->next;
    }
  return (all);
}
