/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:34:32 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/04/15 14:05:51 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(const char *big, const char *little, int len)
{
	const char	*b;
	const char	*l;
	int			i;

	i = 0;
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
				return (1);
		}
		i++;
		big++;
	}
	return (0);
}

static int	get_len(char const *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*s_cpy;
	int		set_len;

	set_len = get_len(set);
	s_cpy = (char *)malloc(get_len(s1) + 1);
	if (!s_cpy)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		if (s1[i] != set[0])
			s_cpy[j++] = s1[i++];
		else
		{
			if (check(s1 + i, set, set_len))
				i += set_len;
			else
				s_cpy[j++] = s1[i++];
		}
	}
	s_cpy[j] = '\0';
	return (s_cpy);
}
/* 
int	main(void)
{
	char *p = ft_strtrim("aastringaaaastringaaaastringaa", "string");
	printf("%s", p);
} */
