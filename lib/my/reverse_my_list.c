/*
** reverse_my_list.c for reverse_my_list in /home/bouill_t/git/mylib/lib/my
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Sun Nov 29 04:53:10 2015 Thomas Bouillon
** Last update Sun Nov 29 05:02:07 2015 Thomas Bouillon
*/

#include <stdlib.h>
#include "my.h"
#include "mylist.h"

t_list		*reverse_my_list(t_list *list1)
{
  t_list	*list2;

  list2 = NULL;
  while (list1 != NULL)
    {
      my_put_in_list(&list2, list1->data);
      list1 = list1->next;
    }
  return (list2);
}
