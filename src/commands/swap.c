/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiedroi <agiedroi@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:31:27 by agiedroi          #+#    #+#             */
/*   Updated: 2025/11/17 14:43:10 by agiedroi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	swap(t_stack_node **head)
{
	int	len;

	len = stack_len(*head);
	if (head == NULL || *head == NULL || len == 1)
		return ;
	*head = (*head)->next;
	(*head)->prev->prev = *head;
	(*head)->prev->next = (*head)->next;
	if ((*head)->next == NULL)
		(*head)->next->prev = (*head)->prev;
	(*head)->next = (*head)->prev;
	(*head)->prev = NULL;
}
