/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 15:29:13 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/04/17 15:35:59 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_print(unsigned int n, char)
{
	printf("%d", n);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	
}

int	main(void)
{
	char tab[] = "String";
	int length = 5;
	ft_foreach(tab, 5, &ft_print);
}