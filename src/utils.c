/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiedroi <agiedroi@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 18:19:36 by agiedroi          #+#    #+#             */
/*   Updated: 2025/11/13 18:27:34 by agiedroi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	error_handler(void)
{
	ft_putstr_fd(ERROR_MESSAGE, STDERR_FILENO);
	exit(EXIT_FAILURE);
}
