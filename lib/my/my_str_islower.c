/*
** my_sr_islower.c for my_str_islower in /home/bouill_t/git/Piscine_C_J06/ex_13
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Tue Oct  6 14:17:06 2015 Thomas Bouillon
** Last update Tue Oct  6 22:20:44 2015 Thomas Bouillon
*/

int	my_str_islower(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
    {
      if (str[i] < 97 || str[i] > 122)
	{
	  return (0);
	}
      i = i + 1;
    }
  return (1);
}
