/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eprusako <eprusako@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 14:10:06 by eprusako          #+#    #+#             */
/*   Updated: 2020/06/30 09:33:17 by eprusako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_tolower(int a)
{
	if (a > 64 && a < 91)
		return (a + 32);
	else
		return (a);
}
