/*
** my_put.c for my_put in /home/bouill_t/git/PSU_2015_my_printf
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Fri Nov  6 18:44:07 2015 Thomas Bouillon
** Last update Mon Nov 16 13:45:51 2015 Thomas Bouillon
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "my.h"

int	put_mynbr(va_list *ap)
{
  int	c;
  int	tmp;

  tmp = va_arg(ap, int);
  c = 0;
  my_put_nbr(tmp);
  while (tmp != 0)
    {
      c = c + 1;
      tmp = tmp / 10;
    }
  return (c);
}

int	put_mystr(va_list *ap)
{
  int	c;
  char	*str;

  str = va_arg(ap, char *);
  if (str[0] == 0)
    {
      my_putstr("(null)");
      return (6);
    }
  c = my_strlen(str);
  my_putstr(str);
  return (c);
}

int	put_mychar(va_list *ap)
{
  int	c;

  c = va_arg(ap, int);
  if (c == 0)
    {
      my_putstr("(null)");
      return (6);
    }
  my_putchar(c);
  return (1);
}

int	put_mynbr_base2(va_list *ap)
{
  int	c;
  char	*base;
  int	nb;

  nb = va_arg(ap, int);
  base = malloc(sizeof(char) * 3);
  base = "01\0";
  c = 0;
  my_putnbr_base(nb, base);
  while ((nb / my_strlen(base)) > 0)
    {
      c = c + 1;
      nb = nb / my_strlen(base);
    }
  c = c + 1;
  return (c);
}

int	put_myfunction(va_list *ap)
{
  int	c;
  char	*base;
  int	nb;

  nb = va_arg(ap, int);
  base = malloc(sizeof(char) * 17);
  base = "0123456789abcdef";
  c = 2;
  my_putstr("0x");
  my_putnbr_base(nb, base);
  while ((nb / my_strlen(base)) != 0)
    {
      c = c + 1;
      nb = nb / my_strlen(base);
    }
  c = c + 1;
  return (c);
}
