/*
** instruct_jvs.c for Pushswap-wip in /home/bassintag/delivery/CPE_2016/CPE_2016_Pushswap/wip/src/techsort/instructions
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Tue Nov 15 15:36:39 2016 Antoine Stempfer
** Last update Tue Nov 15 22:57:29 2016 Antoine Stempfer
*/

#include "techsort.h"

void	instruct_jvs(t_env *env, t_instruct_tkn tkn)
{
  int	val1;
  int	val2;

  val1 = get_referred_value(env, tkn, 0);
  val2 = get_referred_value(env, tkn, 1);
  if (val1 < val2)
    env->reader += 1;
}
