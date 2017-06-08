/*
** my_put_nbr.c for my_put_nbr in /home/bouill_t/git/mylib/lib/my
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Tue Nov  3 18:48:53 2015 Thomas Bouillon
** Last update Fri Nov  6 19:22:21 2015 Thomas Bouillon
*/

void	my_put_nbr(int nb)
{
  if (nb <= 9 && nb >= 0)
    my_putchar(nb + 48);
  else
    {
      if (nb < 0)
	{
	  my_putchar('-');
	  nb = nb * -1;
	}
      my_put_nbr(nb / 10);
      my_putchar(nb % 10 + 48);
    }
}
