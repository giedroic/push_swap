/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiedroi <agiedroi@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:20:51 by agiedroi          #+#    #+#             */
/*   Updated: 2025/11/17 18:02:15 by agiedroi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	stack_sorted(t_stack_node *stack)
{
	if (stack == NULL)
		return (true);
	while (stack->next)
	{
		if (stack->value > stack->next->value)
			return (false);
		stack = stack->next;
	}
	return (true);
}

static t_stack_node	*find_gretest(t_stack_node *stack)
{
	t_stack_node	*greatest_node;
	
	if (stack == NULL)
		return (NULL);
	greatest_node = stack;
	while (stack = stack->next != NULL)
	{
		if (stack->value > greatest_node->value)
			greatest_node = stack;
	}
	return (greatest_node);
}
