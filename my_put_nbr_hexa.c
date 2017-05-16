/*
** my_put_nbr_hexa.c for  in /home/sumeet.singh/delivery/PSU_2016_my_printf
**
** Made by Sumeet Singh
** Login   <sumeet.singh@epitech.net>
**
** Started on  Thu Nov 15 16:26:00 2016 Sumeet Singh
** Last update Thu Nov 17 17:56:02 2016 Sumeet Singh
*/
#include "./include/my_printf.h"
#define hexa "0123456789ABCDEF"

int	my_put_nbr_hexa(int nb)
{
  int	len;

  len = 16;
  if (nb < 0)
    {
      nb = -nb;
      my_putchar('-');
    }
  if (nb >= len - 1)
    my_put_nbr_hexa(nb/len);
  my_putchar(hexa[nb % len]);
return (0);
}
