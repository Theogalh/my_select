/*
** input.c for input in /home/bouill_t/git/PSU_2015_my_select
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Thu Dec 10 15:40:21 2015 Thomas Bouillon
** Last update Sun Dec 13 07:41:01 2015 Thomas Bouillon
*/

#include "mylist.h"
#include "my.h"
#include "my_select.h"

t_mysel	*left_arrow(t_mysel *all)
{
  return (all);
}

t_mysel	*right_arrow(t_mysel *all)
{
  return (all);
}

t_mysel	*up_arrow(t_mysel *all)
{
  if (all->list->select == 1)
    all->list->select = 0;
  all->list = all->list->prev;
  if (all->list->select == 0)
    all->list->select = 1;
  return (all);
}

t_mysel	*down_arrow(t_mysel *all)
{
  if (all->list->select == 1)
    all->list->select = 0;
  all->list = all->list->next;
  if (all->list->select == 0)
    all->list->select = 1;
  return (all);
}

t_mysel	*enter(t_mysel *all)
{
  if (all->list->select == 2)
    all->list->select = 1;
  else
    all->list->select = 2;
  return (all);
}
