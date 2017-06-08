/*
** my_strcpy.c for my_strcpy in /home/bouill_t/git/mylib/lib/my
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Tue Nov  3 19:06:34 2015 Thomas Bouillon
** Last update Wed Nov  4 20:38:58 2015 Thomas Bouillon
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = '\0';
  return (dest);
}
