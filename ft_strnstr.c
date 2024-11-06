/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 06:05:16 by asoudani          #+#    #+#             */
/*   Updated: 2024/11/06 08:30:18 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *b, const char *a, size_t n)
{
	size_t	i;
	size_t	j;
	char	*dst;
	char	*src;

	i = 0;
	dst = (char *)b;
	src = (char *)a;
	if (*src == '\0' || src == NULL)
		return (dst);
	while (dst[i] && i < n)
	{
		j = 0;
		while (src[j] == dst[i + j] && i + j < n)
		{
			if (src[j + 1] == '\0')
			{
				return (dst + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
