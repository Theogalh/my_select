/*
** my_strncopy.c for my_strncopy in /home/bouill_t/git/mylib/lib/my
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Wed Nov  4 20:29:35 2015 Thomas Bouillon
** Last update Wed Nov  4 20:33:06 2015 Thomas Bouillon
*/

#include "my.h"

char	*my_strncpy(char *dest, char *str, int n)
{
  int	i;
  int	j;

  i = my_strlen(dest);
  j = 0;
  while ((str[j] != 0) && (j < n))
    {
      dest[j] = str[j];
      j = j + 1;
    }
  if (n > i)
    dest[n] = 0;
  return (dest);
}
