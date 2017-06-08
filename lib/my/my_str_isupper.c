/*
** my_str_isupper.c for my_str_isupper in /home/bouill_t/git/Piscine_C_J06/ex_14
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Tue Oct  6 14:23:49 2015 Thomas Bouillon
** Last update Tue Oct  6 14:27:47 2015 Thomas Bouillon
*/

int	my_str_isupper(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
    {
      if (str[i] < 65 || str[i] > 90)
	{
	  return (0);
	}
    }
  return (1);
}
