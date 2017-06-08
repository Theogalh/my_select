/*
** my_str_isprintable.c for my_str_isprintable in /home/bouill_t/git/Piscine_C_J06/ex_15
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Tue Oct  6 15:22:05 2015 Thomas Bouillon
** Last update Wed Oct  7 14:21:44 2015 Thomas Bouillon
*/

int	my_str_isprintable(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
    {
      if (str[i] > 31)
	{
	  i = i + 1;
	}
      else
	{
	  return (0);
	}
    }
  return (1);
}
