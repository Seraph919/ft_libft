/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:24:28 by asoudani          #+#    #+#             */
/*   Updated: 2024/10/28 09:55:02 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	char	*ptr;

	ptr = (char *)malloc(nitems * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nitems * size);
	return (ptr);
}
/*
int	main(void)
{
	char	*s;

	s = ft_calloc(4, sizeof(char));
	s = "wach";
	printf("%s\n", s);
}
*/