/*
** my_xmalloc.c for my_xmalloc in /home/bouill_t/git/mylib/lib/my
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Tue Dec  1 11:24:17 2015 Thomas Bouillon
** Last update Tue Dec  1 13:52:42 2015 Thomas Bouillon
*/

#include <stdlib.h>

void	*my_xmalloc(int i)
{
  void	*new;

  if (((new = malloc(i)) == NULL) || i <=0)
    {
      write(2, "Error: malloc", 14);
      exit(-1);
    }
  return (new);
}
