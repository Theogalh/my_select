/*
** my_strlen.c for my_strlen in /home/bouill_t/git/mylib/lib/my
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Tue Nov  3 18:32:21 2015 Thomas Bouillon
** Last update Tue Nov  3 18:32:56 2015 Thomas Bouillon
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
    i = i + 1;
  return (i);
}
