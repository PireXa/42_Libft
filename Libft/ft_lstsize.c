/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-albe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:26:04 by fde-albe          #+#    #+#             */
/*   Updated: 2022/02/24 15:52:57 by fde-albe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	temp;

	temp.next = lst;
	i = 0;
	while (temp.next != NULL)
	{
		i++;
		temp.next = temp.next -> next;
	}
	return (i);
}
