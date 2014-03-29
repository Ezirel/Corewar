/*
** xread.c for xread in /home/tran_1/test/test_corewar/srcs
** 
** Created by tran_1
** Login   <tran_1@epitech.eu>
** 
** Started on  Sat Mar 29 13:48:12 2014 tran_1
** Last update Sat Mar 29 13:54:06 2014 tran_1
*/

#include "../includes/main.h"

void	xread(t_open *opn)
{
  int	res;
  char	buffer[5016];

  while ((res = read(opn->fd, buffer, 5016)) > 0)
    printf("%s\n", buffer);
}
