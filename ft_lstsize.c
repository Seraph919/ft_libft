/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 09:19:36 by asoudani          #+#    #+#             */
/*   Updated: 2024/10/28 10:22:58 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		counter;
	t_list	*i;

	counter = 0;
	i = lst;
	while (i)
	{
		counter++;
		i = i->next;
	}
	return (counter);
}
