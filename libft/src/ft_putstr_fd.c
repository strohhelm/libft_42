/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 19:17:04 by pstrohal          #+#    #+#             */
/*   Updated: 2024/03/21 16:46:01 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putstr_fd(void *s, int fd)
{
	int		i;
	char	*p;

	if (!s)
	{
		write (fd, "(null)", 6);
		return ;
	}
	p = (char *)s;
	i = 0;
	while (p[i])
	{
		write(fd, &p[i], 1);
		i++;
	}
}
