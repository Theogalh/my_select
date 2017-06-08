/*
** main.c for main in /home/bouill_t/git/PSU_2015_my_select
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Wed Dec  9 14:23:44 2015 Thomas Bouillon
** Last update Sun Dec 13 07:57:48 2015 Thomas Bouillon
*/

#include <ncurses.h>
#include <stdlib.h>
#include "mylist.h"
#include "my.h"
#include "my_select.h"

void		myprintw(t_list *tmp)
{
  if (tmp->select == 2)
    attron(A_REVERSE);
  else if (tmp->select == 1)
    attron(A_UNDERLINE);
  else if (tmp->select == 0)
    attron(A_NORMAL);
  printw(tmp->data);
  if (tmp->select == 2)
    attroff(A_REVERSE);
  else if (tmp->select == 1)
    attroff(A_UNDERLINE);
  else if (tmp->select == 0)
    attroff(A_NORMAL);
}

void		show_list(t_mysel *all)
{
  int		i;
  int		y;
  t_list	*tmp;

  tmp = all->first;
  i = 0;
  y = 0;
  while (i != (all->lenght - 1))
    {
      if (i == LINES)
	{
	  i = 0;
	  y = y + 1;
	}
      if (y == COLS)
	exit(-1);
      move(i, y);
      myprintw(tmp);
      tmp = tmp->next;
      i = i + 1;
    }
}

t_mysel	*display_screen(t_mysel *all, int input)
{
  if (input == KEY_UP)
    all = up_arrow(all);
  if (input == KEY_LEFT)
    all = left_arrow(all);
  if (input == KEY_RIGHT)
    all = right_arrow(all);
  if (input == KEY_DOWN)
    all = down_arrow(all);
  if (input == 32)
    all = enter(all);
  if (input == KEY_DC)
    {
      all = remove_elem(all);
      clear();
      all->lenght = all->lenght - 1;
      if (all->list->select < 2)
	all->list->select = 1;
    }
  return (all);
}

void		my_select(t_mysel *all)
{
  int		input;

  input = 0;
  initscr();
  raw();
  curs_set(0);
  cbreak();
  keypad(stdscr, TRUE);
  noecho();
  show_list(all);
  refresh();
  while (input != 27)
    {
      input = getch();
      all = display_screen(all, input);
      show_list(all);
      refresh();
    }
  endwin();
}

int		main(int argc, char **argv)
{ 
  WINDOW	*boite;
  t_mysel	*all;
  t_ctrl	*list;
  t_list	*rlist;

  all = malloc(sizeof(t_mysel));
  list = malloc(sizeof(t_ctrl));
  list->first = NULL;
  list->last = NULL;
  loadlist(&list, argv, argc);
  all->lenght = argc;
  all->first = list->first;
  rlist = listrotated(all->first);
  all->list = list->first;
  all->list->select = 1;
  my_select(all);
  return (0);
}
