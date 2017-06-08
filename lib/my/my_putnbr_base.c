/*
** my_putnbr_base.c for my_put_nbrbase in /home/bouill_t/git/mylib/lib/my
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Sun Nov  8 14:45:47 2015 Thomas Bouillon
** Last update Sun Nov  8 15:46:43 2015 Thomas Bouillon
*/

#include "my.h"

int	my_putnbr_base(int nbr, char *base)
{

  if (nbr < 0)
    {
      my_putchar('-');
      nbr = nbr * - 1;
    }
  if (nbr >= my_strlen(base))
    my_putnbr_base(nbr / my_strlen(base), base);
  my_putchar(base[nbr % my_strlen(base)]);
  return (nbr);
}
