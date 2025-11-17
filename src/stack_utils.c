/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiedroi <agiedroi@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 11:12:06 by agiedroi          #+#    #+#             */
/*   Updated: 2025/11/17 18:44:54 by agiedroi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*find_last_node(t_stack_node *stack)
{
	if (stack == NULL)
		return (NULL);
	while (stack->next != NULL)
		stack = stack->next;
	return (stack);
}

void	append_node(t_stack_node **stack, int n)
{
	t_stack_node	*node;
	t_stack_node	*last_node;

	if (stack == NULL)
		return ;
	node = malloc(sizeof(t_stack_node));
	if (node == NULL)
		return ;
	node->value = n;
	node->next = NULL;
	if (*stack == NULL)
	{
		*stack = node;
		node->prev = NULL;
	}
	else
	{
		last_node = find_last_node(*stack);
		if (last_node == NULL)
			return ;
		last_node->next = node;
		node->prev = last_node;
	}
}

int	stack_len(t_stack_node *stack)
{
	int	len;

	if (stack == NULL)
		return (0);
	len = 0;
	while (stack)
	{
		++len;
		stack = stack->next;
	}
	return (len);
}

t_stack_node	*find_smallest(t_stack_node *stack)
{
	t_stack_node	*smallest_node;
	
	if (stack == NULL)
		return (NULL);
	smallest_node = stack;
	while ((stack = stack->next) != NULL)
	{
		if (stack->value < smallest_node->value)
			smallest_node = stack;
	}
	return (smallest_node);
}
