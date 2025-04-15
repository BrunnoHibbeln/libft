/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <brunnohibbeln@student.42lisbo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:34:32 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/04/14 19:34:32 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *big, char *little)
{
	char	*b;
	char	*l;
	int		i;

	i = 0;
	if (!*little)
		return (big);
	while (*big)
	{
		if ((*big == *little))
		{
			b = big;
			l = little;
			while ((*b == *l) && (*b) && (*l))
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

static

static int	cmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

static int	get_len(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		if (cmp(s1[i], set[j]))
			i++;
		else
			check(s1, set);
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{

}