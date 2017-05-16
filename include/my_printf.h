/*
** my_printf.h for  in /home/sumeet.singh
**
** Made by Sumeet Singh
** Login   <sumeet.singh@epitech.net>
**
** Started on  Thu Nov 17 16:31:42 2016 Sumeet Singh
** Last update Thu Nov 17 16:31:50 2016 Sumeet Singh
*/
#include <stdarg.h>

typedef struct s_flags
{
  char	flag;
  void	(*func)(va_list);
}	t_flags;

void	my_putchar_2(va_list list);

void	my_putstr_2(va_list list);

void	my_put_nbr_bin_2(va_list list);

void	my_put_nbr_2(va_list list);

void	my_put_nbr_hexa_2(va_list list);

void	my_putstr_bis_2(va_list list);

void	my_putchar(char c);

void	my_put_nbr_octal_2(va_list list);

int	my_put_nbr_octal(int nb);

int	my_printf(const char* format, ...);

void	ch_flag(const char *format, int i, va_list list);

int	my_printf(const char *format, ...);

void	my_putchar(char c);

int	my_put_nbr_disp(int nbr);

int	my_put_nbr(int nbr);

unsigned int	my_put_nbr_bin(unsigned int nb);

int	my_put_nbr_hexa(int nb);

int	my_put_nbr_octal(int nb);

int	my_putstr(char *str);

int	my_putstr_bis(char *str);

int	my_strlen(char *str);
