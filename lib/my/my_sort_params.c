/*
** my_sort_params.c for my_sort_params in /home/bouill_t/git/mylib/lib/my
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Tue Nov  3 18:55:35 2015 Thomas Bouillon
** Last update Sun Nov 29 21:08:35 2015 Thomas Bouillon
*/

#include <stdlib.h>
#include "my.h"

void	my_sort_params(int argc, char **argv)
{
  int	i;
  int	j;
  int	tmp;

  i = 0;
  j = 1;
  tmp = j;
  while (i < argc)
    {
      while (j < argc)
	{
	  if (my_strcmp(argv[i], argv[j]) < 0)
	    j = j + 1;
	  else
	    {
	      my_swap_str(&argv[i], &argv[j]);
	      j = j + 1;
	    }
	}
      my_putstr(argv[i]);
      my_putchar('\n');
      i = i + 1;
      j = tmp + 1;
      tmp = tmp + 1;
    }
}
