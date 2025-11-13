/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiedroi <agiedroi@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 19:15:51 by agiedroi          #+#    #+#             */
/*   Updated: 2025/11/13 19:18:07 by agiedroi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	append_node(t_stack_node **stack, int n)
{
	t_stack_node	*node;
	t_stack_node	*last_node;

	if (stack == NULL)
		input_error();
	node = malloc(sizeof(t_stack_node));
	if (node == NULL)
		malloc_error();
	node->nbr = n;
	node->next = NULL;
	if (stack == NULL)
	{
		*stack = node;
		node->prev = NULL;
	}
	else
	{
		last_node = find_last(*stack);
		last_node->next = node;
		node->prev = last_node;
	}
}
