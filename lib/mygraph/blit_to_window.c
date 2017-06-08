/*
** blit_to_window.c for blit_to_window in /home/bouill_t/experimental/liblapin/TD1
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Sun Dec  6 04:23:37 2015 Thomas Bouillon
** Last update Sun Dec  6 04:26:45 2015 Thomas Bouillon
*/

#include <lapin.h>

void		blit_to_window(t_bunny_window *window,
			       const t_bunny_pixelarray *pic,
			       int x, int y)
{
  t_bunny_position pos;

  pos.x = x;
  pos.y = y;
  bunny_blit(&window->buffer, &pic->clipable, &pos);
}
