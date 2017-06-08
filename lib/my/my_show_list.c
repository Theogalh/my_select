/*
** my_show_list.c for my_show_list in /home/bouill_t/git/mylib/lib/my
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Tue Nov  3 18:51:46 2015 Thomas Bouillon
** Last update Sun Dec 13 05:05:56 2015 Thomas Bouillon
*/

#include <stdlib.h>
#include "mylist.h"

void	my_show_list(t_list *list)
{
  t_list *tmp;

  tmp = list;
  while (tmp->next != NULL)
    {
      my_putstr(tmp->data);
      my_putchar('\n');
      tmp = tmp->next;
    }
}
