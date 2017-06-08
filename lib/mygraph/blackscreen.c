/*
** blackscreen.c for blackscreen in /home/bouill_t/experimental/liblapin/TD1
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Sun Dec  6 04:15:07 2015 Thomas Bouillon
** Last update Sun Dec  6 04:31:42 2015 Thomas Bouillon
*/

#include <lapin.h>

void		black_screen(t_bunny_pixelarray *pic)
{
  int	size;
  int	i;
  unsigned int *pixels;

  size = (pic->clipable.clip_width * pic->clipable.clip_height);
  pixels = (unsigned *)pic->pixels;
  i = 0;
  while (i < size)
    {
      pixels[i] = BLACK;
      i = i + 1;
    }
}
