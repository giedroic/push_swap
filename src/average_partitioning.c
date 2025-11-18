/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   average_partitioning.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiedroi <agiedroi@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 09:50:30 by agiedroi          #+#    #+#             */
/*   Updated: 2025/11/18 10:44:51 by agiedroi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long	get_average(t_stack_node *stack)
{
	long	sum;
	int		count;

	sum = 0;
	count = 0;
	while (stack != NULL)
	{
		sum += stack->value;
		stack = stack->next;
		count++;
	}
	if (count == 0)
		return (0);
	return (sum / count);
}

void	average_partitioning(t_stack_node **a, t_stack_node **b)
{
	int		len_a;
	int		i;
	long	avg;

	len_a = stack_len(*a);
	while (len_a > 3)
	{
		avg = get_average(*a);
		i = len_a;
		while (i > 0 && len_a > 3)
		{
			if ((*a)->value < avg)
			{
				pb(b, a);
				len_a--;
			}
			else
				ra(a);
			--i;
		}
	}
}
