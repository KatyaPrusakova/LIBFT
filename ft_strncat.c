/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eprusako <eprusako@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 14:10:06 by eprusako          #+#    #+#             */
/*   Updated: 2020/06/15 16:32:14 by eprusako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *dst, const char *src, int len)
{
	int i;
	int ii;

	i = 0;
	ii = 0;
	while (dst[i] != '\0')
	{
		i++;
	}
	while (ii < len && src[ii] != '\0')
	{
		dst[i] = src[ii];
		i++;
		ii++;
	}
	dst[i] = '\0';
	return (dst);
}
