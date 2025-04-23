/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 12:44:32 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/04/11 12:47:30 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	s_len;
	char			*first;

	first = NULL;
	while (*s)
	{
		if (*s == c)
			return (first = (char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (first);
}
/* 
int	main(void)
{
	const char s[] = "sudasvva";
	char c = 'a';

	char *p = ft_strchr(s, c);
	if (*p == '\0')
		printf("null terminator '\\0'");
	else
		printf("%s", p);
} */
