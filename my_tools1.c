/*
** my_tools.c for  in /home/sumeet.singh/delivery/PSU_2016_my_printf
**
** Made by Sumeet Singh
** Login   <sumeet.singh@epitech.net>
**
** Started on  Thu Nov 17 16:15:37 2016 Sumeet Singh
** Last update Thu Nov 17 16:27:26 2016 Sumeet Singh
*/
#include <unistd.h>
#include "./include/my_printf.h"
#define bin "01"

void	my_putchar(char c)
{
  write (1, &c, 1);
}

int	my_put_nbr(int nbr)
{
  if (nbr < 0)
    {
      my_putchar('-');
    }
  else
    {
      nbr = -nbr;
    }
  my_put_nbr_disp(nbr);
return (0);
}

int	my_put_nbr_disp(int nbr)
{
  if (nbr <= -10)
    {
      my_put_nbr_disp(nbr / 10);
    }
  my_putchar('0' - nbr % 10);
return (0);
}

int	my_putstr(char *str)
{
  int	start;

  start = 0;
  while (str[start] != '\0')
    {
      my_putchar(str[start]);
      start = start + 1;
    }
return(0);
}

int	my_strlen(char *str)
{
  int	start;

  start = 0;
  while (str[start] != '\0')
    {
      start = start + 1;
    }
  return (start);
}
