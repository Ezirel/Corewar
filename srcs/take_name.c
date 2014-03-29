/*
** take_name.c for take_name in /home/tran_1/test/test_shell
** 
** Created by tran_1
** Login   <tran_1@epitech.eu>
** 
** Started on  Fri Mar 28 23:07:07 2014 tran_1
** Last update Sat Mar 29 11:44:32 2014 tran_1
*/

#include "../includes/main.h"

char	*take_name(char *str)
{
  int	i;
  char	*str2;
  int	point;

  point = my_strlen(str) - 3;
  i = 0;
  while (str[i])
    {
      str2 = my_strcpy(str2, str, 0, point);
      ++i;
    }
  str2 = my_strcat(str2, ".cor");
  return (str2);
}
