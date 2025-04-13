/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megoz <megoz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 14:46:00 by megoz             #+#    #+#             */
/*   Updated: 2024/12/21 15:43:06 by megoz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int			ft_putchar(char c);
int			ft_putstr(char *c);
int			ft_printf(const char *str, ...);
int			ft_convert(size_t data, char *base);
int			ft_absolute(int content);
size_t		ft_strlen(const char *s);

#endif
