/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiedroi <agiedroi@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:56:12 by agiedroi          #+#    #+#             */
/*   Updated: 2025/11/17 16:07:59 by agiedroi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// a b c    d e f
// _ b c    a d e f

static void	push(t_stack_node **dest, t_stack_node **src)
{
	t_stack_node	*node_to_push;

	if (*src == NULL)
		return ;
	node_to_push = *src;
	*src = (*src)->next;
	if (*src != NULL)
		(*src)->prev = NULL;
	node_to_push->prev = NULL;
	if (*dest == NULL)
	{
		node_to_push->next = NULL;
		*dest = node_to_push;
	}
	else
	{
		node_to_push->next = *dest;
		node_to_push->next->prev = node_to_push;
		*dest = node_to_push;
	}
}

void	pa(t_stack_node **a, t_stack_node **b)
{
	push(a,b);
	ft_printf("pa\n");
}

void	pb(t_stack_node **b, t_stack_node **a)
{
	push(b,a);
	ft_printf("pb\n");
}
