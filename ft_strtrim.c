/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eprusako <eprusako@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/05 11:13:58 by eprusako          #+#    #+#             */
/*   Updated: 2020/06/25 11:18:27 by eprusako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	unsigned int		i;
	unsigned int		ii;
	unsigned int		len;
	char				*new;

	i = 0;
	while (*s && (*s == ' ' || *s == '\n' || *s == '\t'))
	{
		s++;
	}
	if (*s == '\0')
		return ((char*)s);
	len = ft_strlen(s) - 1;
	while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
	{
		len--;
	}
	if (!(new = (char*)malloc(sizeof(*new) * (len + 2))))
		return (NULL);
	ii = 0;
	while (s[i] != '\0' && i <= len)
		new[ii++] = s[i++];
	new[ii] = '\0';
	return (new);
}
