/*
** xread.c for xread in /home/tran_1/test/test_corewar/srcs
** 
** Created by tran_1
** Login   <tran_1@epitech.eu>
** 
** Started on  Sat Mar 29 13:48:12 2014 tran_1
** Last update Sat Mar 29 21:04:12 2014 tran_1
*/

#include "../includes/main.h"

/*
** Read file
*/
void	xread(t_open *opn)
{
  int	res;
  char	buffer[5016];

  if ((res = read(opn->fd, buffer, 5016)) == -1)
    exit(0);
  parser_comment(buffer);
  close(opn->fd);
}
