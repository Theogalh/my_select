/*
** my_strstr.c for my_strstr in /home/bouill_t/git/mylib/lib/my
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Wed Nov  4 20:34:05 2015 Thomas Bouillon
** Last update Wed Nov  4 20:36:14 2015 Thomas Bouillon
*/

char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int	j;

  j = 0;
  i = 0;
  while (str[i] != 0)
    {
      if (str[i] == to_find[j])
	{
	  while (str[i] == to_find[j])
	    {
	      j = j + 1;
	      i = i + 1;
	      if (to_find[j] == 0)
		return &(str[i - j]);
	    }
	}
      i = i + 1;
    }
  return (0);
}
