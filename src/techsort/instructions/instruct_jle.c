/*
** instruct_jle.c for Pushswap-wip in /home/bassintag/delivery/CPE_2016/CPE_2016_Pushswap/wip/src/techsort
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Tue Nov 15 13:50:45 2016 Antoine Stempfer
** Last update Tue Nov 15 23:07:37 2016 Antoine Stempfer
*/

#include "techsort.h"

void	instruct_jle(t_env *env, t_instruct_tkn tkn)
{
  int	val1;
  int	val2;
  int	jump;

  jump = get_referred_value(env, tkn, 0) - 1;
  val1 = *((int *) (env->la->value));
  val2 = *((int *) (env->lb->value));
  if (val1 == val2)
    env->reader += jump;
}
