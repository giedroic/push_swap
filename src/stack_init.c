/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiedroi <agiedroi@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 11:06:06 by agiedroi          #+#    #+#             */
/*   Updated: 2025/11/17 11:37:01 by agiedroi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_atol(char *nptr, int *result)
{
	long		n;
	char		sign;

	n = 0;
	sign = '+';

	while (*nptr >= 9 && *nptr <= 13 || *nptr == 32)
		nptr++;
	if (*nptr == '-' || *nptr == '+')
		sign = *nptr++;
	if (!ft_isdigit(*nptr))
		return (1);
	while (ft_isdigit(*nptr))
	{
		n = (n * 10) + (*nptr++ - '0');
		if (sign == '+' && n > INT_MAX)
			return (1);
		else if (sign == '-' && n > -(long) INT_MIN)
			return (1);
	}
	if (*nptr != '\0')
		return (1);
	if (sign == '-')
		n *= -1;
	*result = (int) n;
	return (0);
}

void	stack_init(t_stack_node **a, char **argv, bool is_argc_2)
{
	int	n;
	int	i;

	i = 0;
	while (argv[i])
	{
		if (ft_atol(argv[i], &n))
			error_free(a, argv, is_argc_2);
		if (error_duplicate(*a, n);
			error_free(a, argv, is_argc_2);
		append_node(a, n);	
		++i;
	}
	if (is_argc_2)
		ft_free_split(argv);
}
