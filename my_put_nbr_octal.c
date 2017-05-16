/*
** my_put_nbr_octal.c for  in /home/sumeet.singh/delivery/PSU_2016_my_printf
**
** Made by Sumeet Singh
** Login   <sumeet.singh@epitech.net>
**
** Started on  Thu Nov 17 16:26:12 2016 Sumeet Singh
** Last update Thu Nov 17 16:26:13 2016 Sumeet Singh
*/
#include "./include/my_printf.h"
#define octal "01234567"

int	my_put_nbr_octal(int nb)
{
  int	len;

  len = 8;
  if (nb < 0)
    {
      nb = -nb;
      my_putchar('-');
    }
  if (nb >= len - 1)
    my_put_nbr_octal(nb/len);
  my_putchar(octal[nb % len]);
return (0);
}
