/*
** write_name.c for write_name.c in /home/tran_1/test/test_corewar/srcs
** 
** Created by tran_1
** Login   <tran_1@epitech.eu>
** 
** Started on  Sun Mar 30 05:38:08 2014 tran_1
** Last update Mon Mar 31 14:55:20 2014 tran_1
*/

#include "../includes/main.h"
#include "../includes/op.h"
#include <string.h>

void   	write_name(header_t *h, t_open *opn, char *code_to_read)
{
  int	i;

  i = 0;
  while (code_to_read[i])
    {
      if (strncmp(".name", code_to_read, 5) == 0)
	printf("OK\n");
      ++i;
    }
}
