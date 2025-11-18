/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiedroi <agiedroi@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 19:06:31 by agiedroi          #+#    #+#             */
/*   Updated: 2025/11/18 15:45:46 by agiedroi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	stack_sorted(t_stack_node *stack)
{
	if (stack == NULL)
		return (true);
	while (stack->next != NULL)
	{
		if (stack->value > stack->next->value)
			return (false);
		stack = stack->next;
	}
	return (true);
}

static t_stack_node	*find_greatest(t_stack_node *stack)
{
	t_stack_node	*greatest_node;

	if (stack == NULL)
		return (NULL);
	greatest_node = stack;
	stack = stack->next;
	while (stack != NULL)
	{
		if (stack->value > greatest_node->value)
			greatest_node = stack;
		stack = stack->next;
	}
	return (greatest_node);
}

void	sort_three(t_stack_node **a)
{
	t_stack_node	*greatest_node;

	greatest_node = find_greatest(*a);
	if (*a == greatest_node)
		ra(a);
	else if ((*a)->next == greatest_node)
		rra(a);
	if ((*a)->value > (*a)->next->value)
		sa(a);
}

void	handle_five(t_stack_node **a, t_stack_node **b)
{
	while (stack_len(*a) > 3)
	{
		init_nodes(*a, *b);
		finish_rotation(a, find_smallest(*a), 'a');
		pb(b, a);
	}
}
