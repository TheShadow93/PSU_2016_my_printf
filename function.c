/*
** function.c for  in /home/sumeet.singh/delivery/PSU_2016_my_printf
**
** Made by Sumeet Singh
** Login   <sumeet.singh@epitech.net>
**
** Started on  Thu Nov 17 16:12:20 2016 Sumeet Singh
** Last update Thu Nov 17 16:26:46 2016 Sumeet Singh
*/
#include <stdarg.h>
#include "./include/my_printf.h"

void	my_putchar_2(va_list list)
{
  my_putchar(va_arg(list, int));
}

void	my_putstr_2(va_list list)
{
  my_putstr(va_arg(list, char*));
}

void	my_put_nbr_bin_2(va_list list)
{
  my_put_nbr_bin(va_arg(list, int));
}

void	my_put_nbr_2(va_list list)
{
  my_put_nbr(va_arg(list, int));
}

void	my_put_nbr_hexa_2(va_list list)
{
  my_put_nbr_hexa(va_arg(list, int));
}
