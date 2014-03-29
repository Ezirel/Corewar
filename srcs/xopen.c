/*
** xopen.c for xopen in /home/tran_1/test/test_corewar/srcs
** 
** Created by tran_1
** Login   <tran_1@epitech.eu>
** 
** Started on  Sat Mar 29 12:12:24 2014 tran_1
** Last update Sat Mar 29 12:56:41 2014 tran_1
*/

#include "../includes/main.h"

int	xopen(char *str, t_open *opn)
{
  if ((opn->name = malloc(sizeof(*opn->name))) == NULL)
    exit (0);
  if ((opn->fd = open(str, O_RDONLY)) == -1)
    {
      my_putstr("asm: fatal error: no input file\n");
      my_putstr("Compilation terminated\n");
      return (1);
    }
  else
    {
      opn->name = take_name(str);
      if ((opn->fd2 = open(opn->name, O_CREAT, 722)) == -1)
	exit(0);
      return (0);
    }
}
