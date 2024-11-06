/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:19:30 by asoudani          #+#    #+#             */
/*   Updated: 2024/11/01 06:52:34 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < size)
	{
		*((unsigned char *)dest + i) = *((unsigned char *)src + i);
		i++;
	}
	return (dest);
}
//changed !dest || !src to !dest && !dest and it worked! search why!!