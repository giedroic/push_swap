/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiedroi <agiedroi@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 16:49:22 by agiedroi          #+#    #+#             */
/*   Updated: 2025/11/13 18:37:56 by agiedroi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static long	ft_atol(long n)
{
	long		n;
	char	sign;

	n = 0;
	sign = 0;
	while (ft_isescape(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
		sign = *nptr++;
	if (!ft_isdigit(*nptr))
		error_handler();
	while (ft_isdigit(*nptr))
		n = (n * 10) + (*nptr++ - '0');
	if (!ft_isdigit(*nptr))
		error_handler();
	if (sign == '-')
		n *= -1;
	return (n);
}

