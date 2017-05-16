/*
** main.c for printf main in /home/sumeet.singh/delivery/PSU_2016_my_printf
**
** Made by Sumeet Singh
** Login   <sumeet.singh@epitech.net>
**
** Started on  Wed Nov 23 20:46:54 2016 Sumeet Singh
** Last update Wed Nov 23 23:44:10 2016 Sumeet Singh
*/
#include "./include/my.h"

int main()
{
  my_printf("%s %c %s %b\n", "Bonjour", 97, "tout le monde", 2); // 2 = 10 en binaire
  my_printf("Une serie de nombre :) %d %d %d %d\n", 64, 128, 512, 1024);
  return (0);
}
