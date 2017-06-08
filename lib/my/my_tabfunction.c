/*
** my_tabfonction.c for my_tabfonction in /home/bouill_t/git/PSU_2015_my_printf
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Thu Nov 12 19:26:07 2015 Thomas Bouillon
** Last update Mon Nov 16 21:22:51 2015 Thomas Bouillon
*/

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "my_printf.h"
#include "my.h"

void	tab_fonction(int (*tab[13])(va_list *ap))
{
  tab[0] = &put_mystr;
  tab[1] = &put_mychar;
  tab[2] = &put_mynbr;
  tab[3] = &put_mynbr;
  tab[4] = &put_myfunction;
  tab[5] = &put_mypercent;
  tab[6] = &put_mynbr_basebigx;
  tab[7] = &put_mynbr_basex;
  tab[8] = &put_mynbr;
  tab[9] = &put_mynbr_base2;
  tab[10] = &put_myflag_s;
  tab[11] = &put_mypercent;
  tab[12] = &put_myoctale;
}

int	check_arg(va_list *ap, char check, int *tab)
{
  int	c;
  char	*reference;
  int	i;
  int	(*fnc[13])(va_list *ap);

  tab_fonction(fnc);
  reference = "scdip%XxubS o";
  i = -1;
  while (i < 13)
    {
      i = i + 1;
      if (reference[i] == check)
	{
	  c = fnc[i](ap);
	  return (c);
	}
    }
  my_putchar('%');
  return (1);
}
