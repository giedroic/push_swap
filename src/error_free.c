/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiedroi <agiedroi@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 10:55:12 by agiedroi          #+#    #+#             */
/*   Updated: 2025/11/17 11:02:24 by agiedroi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	error_syntax(char *nptr)
{
	while (*nptr >= 9 && *nptr <= 13 || *nptr == 32)
		++nptr;
	if (*nptr == '-' || *nptr == '+')
		++nptr;
	if (!ft_isdigit(*nptr))
		return (1);
	while (ft_isdigit(*ntpr))
		++nptr;
	if (*nptr != '\0')
		return (1);
	return (0);
}


