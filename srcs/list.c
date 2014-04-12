/*
** main.c for main in /home/tran_1/test/test_malloc
** 
** Created by tran_1
** Login   <tran_1@epitech.eu>
** 
** Started on  Thu Apr  3 22:50:40 2014 tran_1
** Last update Sat Apr 12 15:07:38 2014 tran_1
*/

#include "../includes/main.h"

void		add_elem(t_list **list, char *name)
{
  t_list	*stock;
  //  t_list	*tmp;

  if ((stock = malloc(sizeof(*stock))) == NULL)
    exit(0);
  stock->name = name;//strdup(name);
  //printf("%s\n", stock->name);
  stock->next = *list;
  *list = stock;
  /* if (*list == NULL) */
  /*   *list = stock; */
  /* else */
  /*   { */
  /*     tmp = *list; */
  /*     while (tmp->next != NULL) */
  /* 	tmp = tmp->next; */
  /*     tmp->next = stock; */
  /*   } */
}

void		show_list(t_list *list)
{
  t_list	*tmp;

  tmp = list;
  while (tmp->next != NULL)
    {
      printf("%s\n", tmp->name);
      tmp = tmp->next;
    }
}
