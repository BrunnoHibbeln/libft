/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <brunnohibbeln@student.42lisbo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 10:11:14 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/04/10 10:11:14 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)));
}

// int	main(void)
// {
// 	char str = '3';
// 	printf("%d\n", ft_isalpha(str));
// }