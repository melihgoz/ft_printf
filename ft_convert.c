/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megoz <megoz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 15:12:05 by megoz             #+#    #+#             */
/*   Updated: 2024/12/15 15:33:36 by megoz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert(size_t data, char *base)
{
	int				len;
	static char		str[50];
	char			*ptr;

	len = ft_strlen(base);
	ptr = &str[49];
	*ptr = '\0';
	*--ptr = base[data % len];
	data = data / len;
	while (data != 0)
	{
		*--ptr = base[data % len];
		data = data / len;
	}
	return (ft_putstr(ptr));
}
