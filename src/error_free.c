/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiedroi <agiedroi@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 10:55:12 by agiedroi          #+#    #+#             */
/*   Updated: 2025/11/18 11:41:07 by agiedroi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	error_duplicate(t_stack_node *a, int n)
{
	while (a != NULL)
	{
		if (a->value == n)
			return (1);
		a = a->next;
	}
	return (0);
}

void	free_stack(t_stack_node **stack)
{
	t_stack_node	*temp;

	if (stack == NULL)
		return ;
	while (*stack != NULL)
	{
		temp = (*stack)->next;
		free(*stack);
		(*stack) = temp;
	}
	*stack = NULL;
}

void	ft_free_split(char **split_array)
{
	int	i;

	if (split_array == NULL)
		return ;
	i = 0;
	while (split_array[i] != NULL)
	{
		free(split_array[i]);
		i++;
	}
	free(split_array);
}

void	error_free(t_stack_node **a, char **argv, bool is_argc_2)
{
	free_stack(a);
	if (is_argc_2)
		ft_free_split(argv);
	ft_putstr_fd(ERROR_MESSAGE, STDERR_FILENO);
	exit(EXIT_FAILURE);
}
