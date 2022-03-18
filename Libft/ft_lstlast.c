/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-albe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:30:24 by fde-albe          #+#    #+#             */
/*   Updated: 2022/02/24 15:51:55 by fde-albe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	temp;

	if (!lst)
		return (NULL);
	temp.next = lst;
	while (temp.next -> next != NULL)
		temp.next = temp.next -> next;
	return (temp.next);
}
