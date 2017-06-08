/*
** listfonction.c for listfonction in /home/bouill_t/git/PSU_2015_my_select
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Wed Dec  9 15:05:30 2015 Thomas Bouillon
** Last update Sun Dec 13 07:10:47 2015 Thomas Bouillon
*/

#include <stdlib.h>
#include <ncurses.h>
#include "mylist.h"
#include "my.h"
#include "my_select.h"

void	init_all(t_mysel *all)
{
}

void		loadlist(t_ctrl **list, char **argv, int argc)
{
  int		i;
  char		*tmp;

  i = 1;
  while (i < argc)
    {
      tmp = argv[i];
      addlist(*list, tmp);
      i = i + 1;
    }
}

t_list		*listrotated(t_list *list)
{
  t_list        *first;
  t_list        *last;

  first = list;
  while (list->next != NULL)
    {
      list = list->next;
    }
  last = list;
  list->next = first;
  list = list->next;
  list->prev = last;
  return (list);
}
