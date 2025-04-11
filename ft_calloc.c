/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 12:58:13 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/04/11 13:23:59 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void 	*p;
	int		i;

	i = 0;
	p = malloc(nmemb * size); 
	if (!*p)
		return (NULL);
	while (i < nmemb)
		p[i++] = '\0';
	return (p);
}

int	main(void)
{
	size_t nmemb = 5;
	size_t size = 4;
	char *p = ft_calloc(nmemb, sizeof(size));
	
	int i = 0;
	while (i < nmemb)
	{
		printf("%d", p[i] = i);
		i++;
	}
}