/*
** my_printf.c for my_printf in /home/bouill_t/git/PSU_2015_my_printf
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Fri Nov  6 14:05:42 2015 Thomas Bouillon
** Last update Sun Nov 29 21:08:21 2015 Thomas Bouillon
*/

#include <stdarg.h>

int		my_printf(char *str, ...)
{
  va_list	ap;
  int		i;
  int		c;

  i = 0;
  c = 0;
  va_start(ap, str);
  while (str[i] != 0)
    {
      if (str[i] == '%')
	{
	  c = ((check_arg(&ap, str[i + 1]) + c) -2);
	  c = c + 1;
	  i = i + 1;
	}
      else
	my_putchar(str[i]);
      i = i + 1;
      c = c + 1;
    }
  va_end(ap);
  return (c);
}
