/*
** my_select.h for my_select in /home/bouill_t/git/PSU_2015_my_select/include
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Sat Dec 12 18:13:05 2015 Thomas Bouillon
** Last update Sun Dec 13 07:07:10 2015 Thomas Bouillon
*/

#ifndef MY_SELECT_H_
# define MY_SELECT_H_
#include "mylist.h"

typedef struct	s_mysel
{
  t_list	*first;
  t_list	*list;
  int		index;
  int		lenght;
}		t_mysel;

t_mysel	*left_arrow(t_mysel *all);
t_mysel *right_arrow(t_mysel *all);
t_mysel *up_arrow(t_mysel *all);
t_mysel *down_arrow(t_mysel *all);
t_mysel *enter(t_mysel *all);
t_mysel *remove_elem(t_mysel *all);
t_list	*listrotated(t_list *list);

#endif /* MY_SELECT_H_ */
