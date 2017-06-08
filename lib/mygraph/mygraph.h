/*
** mygraph.h for mygraph in /home/bouill_t/git/mylib/lib/mygraph
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Sun Dec  6 04:36:46 2015 Thomas Bouillon
** Last update Sun Dec  6 04:38:16 2015 Thomas Bouillon
*/

#ifndef MYGRAPH_H_
# define MYGRAPH_H_

void	black_screen(t_bunny_pixelarray *pic);
void	blit_to_window(t_bunny_window window,
		       t_bunny_pixelarray *pic,
		       int x, int y);

#endif /* MYGRAPH_H_ */
