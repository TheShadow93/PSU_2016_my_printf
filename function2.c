/*
** function2.c for  in /home/sumeet.singh/delivery/PSU_2016_my_printf
**
** Made by Sumeet Singh
** Login   <sumeet.singh@epitech.net>
**
** Started on  Thu Nov 17 16:12:07 2016 Sumeet Singh
** Last update Thu Nov 17 16:26:34 2016 Sumeet Singh
*/
#include <stdarg.h>
#include "./include/my_printf.h"

void	my_putstr_bis_2(va_list list)
{
  my_putstr_bis(va_arg(list, char*));
}

void	my_put_nbr_octal_2(va_list list)
{
  my_put_nbr_octal(va_arg(list, int));
}
