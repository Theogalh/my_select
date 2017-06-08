/*
** my_strcapitalize.c for my_strcapitalize in /home/bouill_t/git/Piscine_C_J06/ex_10
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Tue Oct  6 13:30:49 2015 Thomas Bouillon
** Last update Sun Nov 29 21:08:50 2015 Thomas Bouillon
*/

char	*my_strcapitalize(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
    {
      if (str[i] == str[0] || str[i - 1] < 47)
	{
	  if (str[i] > 96 && str[i] < 122)
	    {
	      str[i] = str[i] - 32;
	    }
	}
      i = i + 1;
    }
  return (str);
}
