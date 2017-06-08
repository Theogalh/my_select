/*
** my_strcmp.c for my_strcmp in /home/bouill_t/git/Piscine_C_J06/ex_06
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Tue Oct  6 10:56:49 2015 Thomas Bouillon
** Last update Sun Nov 29 21:10:12 2015 Thomas Bouillon
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] != 0)
    {
      if  (s1[i] == s2[i])
	{
	  i = i + 1;
	}
      if (s1[i] > s2[i])
	{
	  return (1);
	}
      if (s1[i] < s2[i])
	{
	  return (-1);
	}
    }
  return (0);
}
