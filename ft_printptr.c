/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmigue <andmigue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 17:45:06 by andmigue          #+#    #+#             */
/*   Updated: 2026/05/20 18:20:15 by andmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(unsigned long n)
{
	char	*low;

	low = "0123456789abcdef";
	if (!n)
		return (ft_putstr("(nil)"));
	ft_putstr("0x");
	return (2 + ft_printhex(n, low));
}
