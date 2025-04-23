/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 09:17:12 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/04/11 12:00:53 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *big, char *little, size_t len)
{
	char	*b;
	char	*l;
	int		i;

	i = 0;
	if (!*little)
		return (big);
	while (*big)
	{
		if ((*big == *little) && (i < len))
		{
			b = big;
			l = little;
			while ((*b == *l) && (*b) && (*l) && (i++ < len))
			{
				b++;
				l++;
			}
			if (!*l)
				return (big);
		}
		i++;
		big++;
	}
	return (NULL);
}
/* 
int	main(void)
{
	char big[] = "-62,12345 +62,47";
	char little[] = "345";
	int len = 9;

	char *p = ft_strnstr(big, little, len);
	printf("ft_strnstr: %s\n",p);
} */