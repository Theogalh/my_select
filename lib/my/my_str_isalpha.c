/*
** my_str_isalpha.c for my_str_isalpha in /home/bouill_t/git/Piscine_C_J06/ex_11
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Tue Oct  6 13:45:25 2015 Thomas Bouillon
** Last update Wed Oct  7 14:46:04 2015 Thomas Bouillon
*/

int	my_str_isalpha(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
    {
      if (str[i] < 96)
	{
	  return (0);
	}
      if (str[i] > 90 && str[i] < 97)
	{
	  i = i + 1;
	  return (0);
	}
      if (str[i] > 122)
	{
	  return (0);
	}
      i = i + 1;
    }
  return (1);
}
