/*
** xopen.c for xopen in /home/tran_1/test/test_corewar/srcs
** 
** Created by tran_1
** Login   <tran_1@epitech.eu>
** 
** Started on  Sat Mar 29 12:12:24 2014 tran_1
** Last update Tue Apr  1 11:36:28 2014 tran_1
*/

#include "../includes/main.h"

/*
** Open file
*/
void	xopen(char **str, t_open *opn)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if ((opn->fd = open(str[i], O_RDONLY)) == -1)
	my_putstr("File doesn't exist\n");
      else
	create_exe(opn, str[i]);
      ++i;
    }
}
