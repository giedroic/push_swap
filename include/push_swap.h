/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiedroi <agiedroi@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 10:22:09 by agiedroi          #+#    #+#             */
/*   Updated: 2025/11/13 17:57:04 by agiedroi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft.h"
# include <stdlib.h>
# include <stdbool.h>
# include <limits.h>

typedef struct s_stack_node
{
	int			n;
	int			i;
	int			cost;
	bool		above_median;
	bool		cheapest;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}	t_stack_node;
#endif
