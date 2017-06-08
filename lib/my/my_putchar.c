/*
** my_putchar.c for my_putchar in /home/bouill_t/git/mylib/lib/my
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Tue Nov  3 18:31:35 2015 Thomas Bouillon
** Last update Tue Nov  3 18:31:49 2015 Thomas Bouillon
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}
