/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:36:37 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/04/09 14:55:49 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while ((src[i]) && (i < size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
/* 
int	main(void)
{
	char	dst[] = "aaaaaaa";
	char	src[] = "bbbbb";
	size_t	size = 3;
	
	printf("dst: %s", ft_strlcpy(dst, src, size));
} */
