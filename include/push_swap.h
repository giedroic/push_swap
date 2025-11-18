/* ************************************************************************** */ /*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiedroi <agiedroi@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 09:03:13 by agiedroi          #+#    #+#             */
/*   Updated: 2025/11/17 14:38:35 by agiedroi         ###   ########.fr       */
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
	int					final_index;
	int					push_cost;
	bool				above_median;
	bool				cheapest;	
	struct s_stack_node	*target_node;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}	t_stack_node;

int		error_duplicate(t_stack_node *a, int n);
void		free_stack(t_stack_node **stack);
void		ft_free_split(char **split_array);
void		error_free(t_stack_node **a, char **argv, bool is_argc_2);

t_stack_node	*find_last_node(t_stack_node *stack);
void		append_node(t_stack_node **stack, int n);
int	stack_len(t_stack_node *stack);
t_stack_node	*find_smallest(t_stack_node *stack);
t_stack_node	*find_cheapest(t_stack_node *stack);

void		stack_init(t_stack_node **a, char **argv, bool is_argc_2);

bool	stack_sorted(t_stack_node *stack);
void	sort_three(t_stack_node **a);
void	handle_five(t_stack_node **a, t_stack_node **b);

void	sa(t_stack_node **a);
void	sb(t_stack_node **b);
void	ss(t_stack_node **a, t_stack_node **b);
void	pa(t_stack_node **a, t_stack_node **b);
void	pb(t_stack_node **b, t_stack_node **a);
void	ra(t_stack_node **a);
void	rb(t_stack_node **b);
void	rr(t_stack_node **a, t_stack_node **b);
void	rra(t_stack_node **a);
void	rrb(t_stack_node **b);
void	rrr(t_stack_node **a, t_stack_node **b);

void	set_current_position(t_stack_node *stack);
void	set_cost(t_stack_node *a, t_stack_node *b);
void	set_cheapest(t_stack_node *b);
void	init_nodes(t_stack_node *a, t_stack_node *b);

void	finish_rotation(t_stack_node **stack,
			t_stack_node *top_node,
			char stack_name);
void	average_partitioning(t_stack_node **a, t_stack_node **b);

void	push_swap(t_stack_node **a, t_stack_node **b);
#endif
