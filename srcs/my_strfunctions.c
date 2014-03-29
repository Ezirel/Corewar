/*
** my_strfunctions.c for my_strfunctions in /home/tran_1/test/test_shell
** 
** Created by tran_1
** Login   <tran_1@epitech.eu>
** 
** Started on  Fri Mar 28 22:56:02 2014 tran_1
** Last update Sat Mar 29 11:44:23 2014 tran_1
*/

#include "../includes/main.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  while (*str)
    my_putchar(*(str++));
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    ++i;
  return (i);
}

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	j;

  j = 0;
  i = my_strlen(dest);
  while (src[j])
    dest[i++] = src[j++];
  dest[i] = '\0';
  return (dest);
}

char	*my_strcpy(char *dest, char *src, int begin, int end)
{
  int	i;

  i = 0;
  if (src == NULL)
    return (0);
  if ((dest = malloc(sizeof(*src) + 1)) == NULL)
    return (0);
  while (begin <= end)
    {
      dest[i] = src[begin];
      i++;
      begin++;
    }
  dest[i] = '\0';
  return (dest);
}
