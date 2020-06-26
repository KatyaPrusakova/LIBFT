/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eprusako <eprusako@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/05 11:13:58 by eprusako          #+#    #+#             */
/*   Updated: 2020/06/26 15:43:27 by eprusako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *big, const char *little)
{
	unsigned int		i;
	unsigned int		j;
	int					len;

	i = 0;
	len = 0;
	len = ft_strlen(little);
	if (len == 0)
		return ((char*)big);
	while (big[i] != '\0')
	{
		j = 0;
		while (little[j] != '\0' && big[i + j] == little[j])
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char*)big + i);
		i++;
	}
	return (0);
}
