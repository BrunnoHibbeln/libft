/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:52:19 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/04/15 17:22:59 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(char const *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int	i;
	int	c_count;
	int	s_len;
	char	**p;

	s_len = get_len(s);
	i = 0;
	c_count = 0;
	while (s[i])
	{
		if (s[i] == c)
			c_count++;
		i++;
	}
}
