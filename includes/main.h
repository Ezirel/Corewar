/*
** main.h for main in /home/tran_1/test/test_shell
** 
** Created by tran_1
** Login   <tran_1@epitech.eu>
** 
** Started on  Fri Mar 28 22:40:00 2014 tran_1
** Last update Sat Mar 29 12:29:00 2014 tran_1
*/

#ifndef		MAIN_H_
# define	MAIN_H_
# include	<fcntl.h>
# include	<stdio.h>
# include	<stdlib.h>
# include	<unistd.h>

typedef struct	s_open
{
  int		fd;
  int		fd2;
  char		*name;

}		t_open;

void		my_putchar(char c);
void		my_putstr(char *str);
int		my_strlen(char *str);
char		*my_strcpy(char *dest, char *src, int begin, int enb);
char		*my_strcat(char *dest, char *src);
char		*take_name(char *str);
int		xopen(char *str, t_open *opn);
#endif		/* MAIN_H_ */
