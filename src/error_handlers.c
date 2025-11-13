/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiedroi <agiedroi@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 18:19:36 by agiedroi          #+#    #+#             */
/*   Updated: 2025/11/13 19:08:30 by agiedroi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	input_error(void)
{
	ft_putstr_fd(ERROR_MESSAGE, STDERR_FILENO);
	exit(EXIT_FAILURE);
}

void	malloc_error(void)
{
	ft_putstr_fd("malloc error\n", STDERR_FILENO);
	exit(EXIT_FAILURE);
}
