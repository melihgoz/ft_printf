/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_absolute.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megoz <megoz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 15:45:30 by megoz             #+#    #+#             */
/*   Updated: 2024/12/14 16:05:01 by megoz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_absolute(int content)
{
	if (content < 0)
	{
		ft_putchar('-');
		if (content == -2147483648)
			return (ft_convert(2147483648, "0123456789") + 1);
		content *= -1;
		return (ft_convert(content, "0123456789") + 1);
	}
	return (ft_convert(content, "0123456789"));
}
