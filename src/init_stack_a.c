/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiedroi <agiedroi@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 19:19:20 by agiedroi          #+#    #+#             */
/*   Updated: 2025/11/15 22:57:05 by agiedroi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static long	ft_atol(long n)
{
	long		n;
	char		sign;

	n = 0;
	sign = 0;
	while (ft_isescape(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
		sign = *nptr++;
	if (!ft_isdigit(*nptr))
		input_error();
	while (ft_isdigit(*nptr))
		n = (n * 10) + (*nptr++ - '0');
	if (!ft_isdigit(*nptr))
		input_error();
	if (sign == '-')
		n *= -1;
	return (n);
}

static void	is_duplicate(t_stack_node **a, int d)
{
	while (*a != NULL)
	{
		if ((*a)->nbr == n)
			input_error();
		*a = (*a)->next;
	}
}

void	init_stack_a(t_stack_node **a, char *argv[])
{
	long	n;
	int		i;

	i = 0;
	while (argv[i] != NULL)
	{
		n = ft_atol(argv[i]);
		if (n > INT_MAX || n < INT_MIN)
			error_handler();
		is_duplicate(a, n);
		append_node(a, (int) n); // TO DO
		++i;
	}
}
