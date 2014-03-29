/*
** xopen.c for xopen in /home/tran_1/test/test_corewar/srcs
** 
** Created by tran_1
** Login   <tran_1@epitech.eu>
** 
** Started on  Sat Mar 29 12:12:24 2014 tran_1
** Last update Sat Mar 29 13:11:01 2014 tran_1
*/

#include "../includes/main.h"

int	check_file(char *str)
{
  int	i;

  i = my_strlen(str);
  if (str[i - 1] == 's' && str[i - 2] == '.')
    return (0);
  else
    return (1);
}

void	xopen(char *str, t_open *opn)
{
  if ((opn->name = malloc(sizeof(*opn->name))) == NULL)
    exit (0);
  if ((opn->fd = open(str, O_RDONLY)) == -1)
    my_putstr("File doesn't exist\n");
  else
    {
      if (check_file(str) == 0)
	{
	  opn->name = take_name(str);
	  if ((opn->fd2 = open(opn->name, O_CREAT, 722)) == -1)
	    exit(0);
	}
      else
	my_putstr("Enter file with .s extension\n");
    }
}
