/*
** my_putstr.c for my_putstr in /home/bouill_t/git/mylib/lib/my
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Tue Nov  3 18:30:20 2015 Thomas Bouillon
** Last update Tue Nov  3 18:30:59 2015 Thomas Bouillon
*/

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}
