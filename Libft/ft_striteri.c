/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-albe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:04:40 by fde-albe          #+#    #+#             */
/*   Updated: 2022/02/28 13:03:58 by fde-albe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	if (s != NULL && f != NULL)
	{
		size = ft_strlen(s);
		while (i < size)
		{
			(*f)(i, s);
			s++;
			i++;
		}
	}
}
