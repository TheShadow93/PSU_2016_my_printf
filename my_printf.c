/*
** my_printf.c for  in /home/sumeet.singh/delivery/PSU_2016_my_printf
**
** Made by Sumeet Singh
** Login   <sumeet.singh@epitech.net>
**
** Started on  Thu Nov 17 16:14:45 2016 Sumeet Singh
** Last update Thu Nov 17 17:01:55 2016 Sumeet Singh
*/
#include <stdarg.h>
#include "./include/my_printf.h"

t_flags	flags[] =
  {
    {'d', &my_put_nbr_2},
    {'s', &my_putstr_2},
    {'c', &my_putchar_2},
    {'b', &my_put_nbr_bin_2},
    {'S', &my_putstr_bis_2},
    {'x', &my_put_nbr_hexa_2},
    {'o', &my_put_nbr_octal_2},
  };

void	ch_flag(const char *format, int i, va_list list)
{
  int	a;
  int	b;

  a = 0;
  b = 7;
  while ((a < b) && (flags[a].flag != format[i]))
    a = a + 1;
  if (a == b)
    {
      my_putchar('%');
      my_putchar(format[i]);
    }
  else
    flags[a].func(list);
}

int	my_printf(const char *format, ...)
{
  va_list	list;
  int	i;

  i = -1;
  va_start(list, format);
  while (format[++i])
    {
      if (format[i] == '%')
	{
	  i = i + 1;
	  if (format[i] == '%')
	    my_putchar('%');
	  else
	    ch_flag(format, i, list);
	}
      else
	my_putchar(format[i]);
    }
  return (0);
}
