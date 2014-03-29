/*
** main.c for Corewar in /home/tran_1/test/test_shell
** 
** Created by tran_1
** Login   <tran_1@epitech.eu>
** 
** Started on  Fri Mar 28 22:18:42 2014 tran_1
** Last update Sat Mar 29 13:10:44 2014 tran_1
*/

#include "../includes/main.h"

int		main(int ac, char **av)
{
  t_open	*opn;

  if (ac == 1)
    {
      my_putstr("asm: fatal error: no input file\n");
      my_putstr("Compilation terminated\n");
      return (0);
    }
  struct_init(&opn);
  xopen(av[1], opn);
  check_file(av[1]);
  return (0);
}
