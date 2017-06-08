/*
** my_put3.c for my_put3 in /home/bouill_t/experimental/PSU_2015_my_printf
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Mon Nov 16 13:21:32 2015 Thomas Bouillon
** Last update Sun Nov 29 21:09:47 2015 Thomas Bouillon
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "my.h"

int	put_myoctale(va_list *ap)
{
  int	c;
  int	nb;

  nb = va_arg(*ap, int);
  c = 0;
  my_putnbr_base(nb, "01234567");
  while ((nb / 8) > 0)
    {
      c = c + 1;
      nb = nb / 8;
    }
  c = c + 1;
  return (c);
}

int	put_mypercent(va_list *ap)
{
  my_putchar('%');
  return (1);
}

int	put_mynbr_base(int nb, char *base)
{
  int	c;

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
