/*
** my_show_wordtab.c for my_show_wordtab in /home/bouill_t/git/mylib/lib/my
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Tue Nov  3 18:53:46 2015 Thomas Bouillon
** Last update Tue Nov  3 18:54:38 2015 Thomas Bouillon
*/

void	my_show_wordtab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i] != 0)
    {
      my_putstr(tab[i]);
      my_putchar('\n');
      i = i + 1;
    }
}
