/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-albe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:44:35 by fde-albe          #+#    #+#             */
/*   Updated: 2022/02/21 09:45:18 by fde-albe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	a;
	size_t	c;

	i = 0;
	a = 0;
	c = 0;
	while (dst[i] != '\0')
		i++;
	while (src[a] != '\0')
		a++;
	if (size <= i)
		a = a + size;
	else
		a = a + i;
	while (src[c] != '\0' && (c + i + 1) < size)
	{
		dst[c + i] = src[c];
		c++;
	}
	dst[c + i] = '\0';
	return (a);
}
