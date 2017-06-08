/*
** mylist.h for my_list in /home/bouill_t/git/mylib/lib/my
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Tue Nov  3 18:43:59 2015 Thomas Bouillon
** Last update Sun Dec 13 04:58:29 2015 Thomas Bouillon
*/

#ifndef MYLIST_H_
# define MYLIST_H_

typedef struct	s_list
{
  struct s_list	*next;
  struct s_list *prev;
  char		*data;
  int		select;
}		t_list;

typedef struct	s_ctrl
{
  struct s_list *first;
  struct s_list *last;
}		t_ctrl;

#endif /* MYLIST_H_ */
