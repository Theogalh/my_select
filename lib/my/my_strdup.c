/*
** my_strdup.c for my_strdup in /home/bouill_t/git/mylib/lib/my
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Tue Nov  3 19:08:50 2015 Thomas Bouillon
** Last update Tue Nov  3 19:10:43 2015 Thomas Bouillon
*/

#include <stdlib.h>
#include "my.h"

char	*my_strdup(char *src)
{
  int	lenght;
  char	*result;

  lenght = my_strlen(src);
  result = malloc(lenght * sizeof(char));
  result = my_strcpy(result, src);
  return (result);
}
