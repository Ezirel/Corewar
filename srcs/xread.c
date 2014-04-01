/*
** xread.c for xread in /home/tran_1/test/test_corewar/srcs
** 
** Created by tran_1
** Login   <tran_1@epitech.eu>
** 
** Started on  Sat Mar 29 13:48:12 2014 tran_1
** Last update Tue Apr  1 10:58:03 2014 tran_1
*/

#include "../includes/main.h"
#include "../includes/get_next_line.h"

/*
** Read file
*/
void		xread(t_open *opn)
{
  header_t	h;
  int		res;
  char		*name;

  name = get_next_line(opn->fd);
  printf("%s\n", name);
}
