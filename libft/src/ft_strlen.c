/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 10:04:41 by pstrohal          #+#    #+#             */
/*   Updated: 2024/03/22 19:09:00 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlen(const char *s)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

//  int	main(void)
// {
// 	char a[] = "\n'456y76yu";

// 	printf("%lu\n", ft_strlen(a));
// 	printf("%lu", strlen(a));
// 	return(0);