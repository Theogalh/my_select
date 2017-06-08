/*
** my_getnbr.c for my_getnbr in /home/bouill_t/git/CPE_2015_Pushswap
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Sun Nov 22 21:53:03 2015 Thomas Bouillon
** Last update Sun Nov 29 21:07:58 2015 Thomas Bouillon
*/

#include "my.h"
#include "mylist.h"

int	is_neg(char *str)
{
  int	i;
  int	counter;

  i = 0;
  counter = 0;
  while (str[i] > '9' || str[i] < '0')
    {
      if (str[i] == '-')
	counter = counter + 1;
      i = i + 1;
    }
  if (counter % 2 != 0)
    return (1);
  else
    return (0);
}

int	is_num(char l)
{
  if (l >= '0' && l <= '9')
    return (1);
  else
    return (0);
}

int	my_getnbr(char *str)
{
  int	i;
  int	nbr;

  nbr = 0;
  i = 0;
  while (is_num(str[i]) == 0)
    i = i + 1;
  while (is_num(str[i]) == 1)
    {
      nbr = ((nbr * 10) + (str[i] - 48));
      i = i + 1;
    }
  if (is_neg(str) == 1)
    nbr = -nbr;
  return (nbr);
}
