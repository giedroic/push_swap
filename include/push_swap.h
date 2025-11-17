/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiedroi <agiedroi@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 09:03:13 by agiedroi          #+#    #+#             */
/*   Updated: 2025/11/17 11:31:01 by agiedroi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stdlib.h>
# include <stdbool.h>
# include <limits.h>
# define ERROR_MESSAGE "Error\n"

typedef struct s_stack_node
{
	int					value;
	int					current_position;
	int					final_inex;
	bool				above_median;
	bool				cheapest;	
	struct s_stack_node	*target_node;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}	t_stack_node;

int	error_syntax(char *nptr);
int	error_duplicate(char *nptr);
void	free_stack(t_stack_node **stack);
void	ft_free_split(char **split_array);

t_stack_node	*find_last(t_stack_node *stack);
void	append_node(t_stack_node **stack, int n);

void	stack_init(t_stack_node **a, char **argv, bool is_argc_2)
#endif
