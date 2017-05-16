/*
** my_tools2.c for  in /home/sumeet.singh/delivery/PSU_2016_my_printf
**
** Made by Sumeet Singh
** Login   <sumeet.singh@epitech.net>
**
** Started on  Thu Nov 17 16:27:35 2016 Sumeet Singh
** Last update Thu Nov 17 16:28:07 2016 Sumeet Singh
*/
#include <unistd.h>
#include "./include/my_printf.h"
#define bin "01"

int	my_putstr_bis(char *str)
{
  int	start;

  start = 0;
  while (str[start] != '\0')
    {
      if (str[start] < 32 || str[start] >= 127)
	{
	  my_putchar('\\');
	  my_put_nbr_octal((int) str[start]);
	  start = start + 1;
	}
      else
	{
	  my_putchar(str[start]);
	  start = start + 1;
	}
    }
return(0);
}

unsigned int	my_put_nbr_bin(unsigned int nb)
{
  int	len;

  len = 2;
  if (nb > 1)
    my_put_nbr_bin(nb/len);
  my_putchar(bin[nb % len]);
return (0);
}
