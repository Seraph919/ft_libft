/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 23:28:41 by asoudani          #+#    #+#             */
/*   Updated: 2024/10/28 10:24:56 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)ptr + i) = (unsigned char)x;
		i++;
	}
	return (ptr);
}
/*
int	main(void)
{
	char	tab[3] = "wac";
	char	*s;

	s = ft_memset(tab,'a',3);
	printf("%c\n", s[0]);
	printf("%c\n", s[1]);
	printf("%c\n", s[2]);
}
*/