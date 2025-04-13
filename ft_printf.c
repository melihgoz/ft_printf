/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megoz <megoz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 15:49:45 by megoz             #+#    #+#             */
/*   Updated: 2024/12/21 16:11:44 by megoz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	pcontrol(va_list *arg)
{
	unsigned long	ptr;

	ptr = va_arg(*arg, unsigned long);
	if (ptr == 0)
		return (ft_putstr("(nil)"));
	ft_putstr("0x");
	return (ft_convert(ptr, "0123456789abcdef") + 2);
}

static int	ft_type_control(const char c, va_list *arg)
{
	if (c == 'd' || c == 'i')
		return (ft_absolute(va_arg(*arg, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(*arg, char *)));
	else if (c == 'c')
		return (ft_putchar(va_arg(*arg, int)));
	else if (c == 'p')
		return (pcontrol(arg));
	else if (c == 'u')
		return (ft_convert(va_arg(*arg, unsigned int), "0123456789"));
	else if (c == '%')
		return (ft_putchar('%'));
	else if (c == 'x')
		return (ft_convert(va_arg(*arg, unsigned int), "0123456789abcdef"));
	else if (c == 'X')
		return (ft_convert(va_arg(*arg, unsigned int), "0123456789ABCDEF"));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;
	int		j;

	va_start(arg, str);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == '\0')
				return (j);
			j += ft_type_control(str[i + 1], &arg);
			i++;
		}
		else
			j += write(1, &str[i], 1);
		i++;
	}
	va_end(arg);
	return (j);
}
