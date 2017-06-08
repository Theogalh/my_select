/*
** my_swap.c for my_swap in /home/bouill_t/git/mylib/lib/my
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Wed Nov  4 20:37:03 2015 Thomas Bouillon
** Last update Wed Nov  4 20:37:44 2015 Thomas Bouillon
*/

int	my_swap(int *a,  int *b)
{
  int	tmp;

  tmp = *a;
  *a = *b;
  *b = tmp;
}
