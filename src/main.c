/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiedroi <agiedroi@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 10:11:31 by agiedroi          #+#    #+#             */
/*   Updated: 2025/11/15 23:05:20 by agiedroi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack_node	*a;
	t_stack_node	*b;

	if (argc == 1)
		return (0);
	else if (argc == 2)
		argv = ft_split(argv[argc - 1], ' ');
	init_stack_a(&a, argv);
	(void) b;
	return (0);
}
