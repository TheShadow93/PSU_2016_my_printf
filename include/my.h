/*
** my.h for  in /home/sumeet.singh
**
** Made by Sumeet Singh
** Login   <sumeet.singh@epitech.net>
**
** Started on  Thu Nov 17 16:31:33 2016 Sumeet Singh
** Last update Thu Nov 17 16:31:35 2016 Sumeet Singh
*/
#include <stdarg.h>

typedef struct s_flags
{
  char	flag;
  void	(*func)(va_list);
}	t_flags;


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
