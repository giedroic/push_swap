/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiedroi <agiedroi@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:27:13 by agiedroi          #+#    #+#             */
/*   Updated: 2025/11/18 13:08:28 by agiedroi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	set_target_node(t_stack_node *a, t_stack_node *b)
{
	t_stack_node	*current_a;
	t_stack_node	*target_node;
	long			best_match_index;

	while (b != NULL)
	{
		best_match_index = LONG_MAX;
		current_a = a;
		while (current_a != NULL)
		{
			if (current_a->value > b->value
				&& current_a->value < best_match_index)
			{
				best_match_index = current_a->value;
				target_node = current_a;
			}
			current_a = current_a->next;
		}
		if (LONG_MAX == best_match_index)
			b->target_node = find_smallest(a);
		else
			b->target_node = target_node;
		b = b->next;
	}
}

void	set_current_position(t_stack_node *stack)
{
	int	i;
	int	centerline;

	i = 0;
	if (stack == NULL)
		return ;
	centerline = stack_len(stack) / 2;
	while (stack != NULL)
	{
		stack->current_position = i;
		if (i <= centerline)
			stack->above_median = true;
		else
			stack->above_median = false;
		stack = stack->next;
		++i;
	}
}

void	set_cost(t_stack_node *a, t_stack_node *b)
{
	int	len_a;
	int	len_b;
	int	cost_a;

	len_a = stack_len(a);
	len_b = stack_len(b);
	while (b != NULL)
	{
		b->push_cost = b->current_position;
		if (b->above_median == false)
			b->push_cost = len_b - b->current_position;
		cost_a = b->target_node->current_position;
		if (b->target_node->above_median == false)
			cost_a = len_a - b->target_node->current_position;
		if (b->above_median == b->target_node->above_median)
		{
			if (cost_a > b->push_cost)
				b->push_cost = cost_a;
		}
		else
			b->push_cost += cost_a;
	}
}

void	set_cheapest(t_stack_node *b)
{
	long			best_match_value;
	t_stack_node	*best_match_node;

	if (b == NULL)
		return ;
	best_match_value = LONG_MAX;
	while (b != NULL)
	{
		if (b->push_cost < best_match_value)
		{
			best_match_value = b->push_cost;
			best_match_node = b;
		}
		b = b->next;
	}
	best_match_node->cheapest = true;
}

void	init_nodes(t_stack_node *a, t_stack_node *b)
{
	set_target_node(a, b);
	set_current_position(a);
	set_current_position(b);
	set_cost(a, b);
	set_cheapest(b);
}
