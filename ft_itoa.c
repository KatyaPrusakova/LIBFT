/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eprusako <eprusako@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/05 11:13:58 by eprusako          #+#    #+#             */
/*   Updated: 2020/06/26 11:20:20 by eprusako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_len(int n)
{
	int			len;

	len = 0;
	if (n == 0)
		len++;
	if (n < 0)
	{
		n = n * -1;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	int			len;
	long		nb;
	char		*str;

	nb = n;
	len = ft_len(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!(str = (char*)malloc(sizeof(char) * (len))))
		return (NULL);
	if (nb == 0)
		str[0] = '0';
	str[len--] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		str[len--] = (nb % 10) + 48;
		nb = nb / 10;
	}
	return (str);
}
