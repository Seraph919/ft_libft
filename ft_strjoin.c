/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:14:35 by asoudani          #+#    #+#             */
/*   Updated: 2024/10/28 09:58:48 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	int		i;
	char	*returned;

	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	returned = malloc(sizeof(char) * len1 + len2 + 1);
	if (!returned)
		return (NULL);
	while (s1[i])
	{
		returned[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		returned[len1 + i] = s2[i];
		i++;
	}
	returned[len1 + i] = '\0';
	return (returned);
}
