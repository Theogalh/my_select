/*
** my_put2.c for my_put2 in /home/bouill_t/git/PSU_2015_my_printf
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Thu Nov 12 14:28:37 2015 Thomas Bouillon
** Last update Sun Nov 29 21:06:23 2015 Thomas Bouillon
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "my.h"

int	put_myflag_s(va_list *ap)
{
  int	i;
  int	c;
  char	*str;

  str = va_arg(*ap, char *);
  i = 0;
  c = 0;
  if (str == NULL)
    {
      my_putstr("(null)");
      return (6);
    }
  while (str[i] != 0)
    {
      if (str[i] >= 127 || str[i] < 32)
	{
	  my_putchar('\\');
	  c = c + put_mynbr_base(((int)str[i]), "01234567");
	}
      else
	my_putchar(str[i]);
      i = i + 1;
      c = c + 1;
    }
  return (c);
}

int	put_mynbr_basebigx(va_list *ap)
{
  int	c;
  int	nb;

  nb = va_arg(*ap, int);
  c = 0;
  my_putnbr_base(nb, "0123456789ABCDEF");
  while ((nb / 16) > 0)
    {
      c = c + 1;
      nb = nb / 16;
    }
  c = c + 1;
  return (c);
}

int	put_mynbr_basex(va_list *ap)
{
  int	c;
  int	nb;

  nb = va_arg(*ap, int);
  c = 0;
  my_putnbr_base(nb, "0123456789abcdef");
  while ((nb / 16) > 0)
    {
      c = c + 1;
      nb = nb / 16;
    }
  c = c + 1;
  return (c);
}
