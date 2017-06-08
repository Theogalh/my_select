/*
** my_printf.h for my_printf in /home/bouill_t/git/PSU_2015_my_printf/include
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Thu Nov 12 14:24:06 2015 Thomas Bouillon
** Last update Mon Nov 16 13:11:19 2015 Thomas Bouillon
*/

#ifndef MY_PRINTF_H_
# define MY_PRINtF_H_

int	put_mystr(va_list *ap);
int	put_mychar(va_list *ap);
int	put_mynbr(va_list *ap);
int	put_myfunction(va_list *ap);
int	put_mypercent(va_list *ap);
int	put_mynbr_basebigx(va_list *ap);
int	put_mynbr_base2(va_list *ap);
int	put_mynbr_basex(va_list *ap);
int	put_myflag_s(va_list *ap);
int	put_myoctale(va_list *ap);

#endif /*MY_PRINTF_H_*/
