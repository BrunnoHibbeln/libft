/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <brunnohibbeln@student.42lisbo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 13:14:34 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/04/14 13:14:34 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	return (dest);
}

// int main(void)
// {
// 	char test1[20] = "Hello, World!";
// 	char test2[20] = "Hello, World!";

// 	// Case 1: No overlap
// 	printf("Before (no overlap): %s\n", test1);
// 	ft_memmove(test1 + 7, test1, 5); // Move "Hello" to position 7
// 	printf("After  (no overlap): %s\n", test1);

// 	// Reset test2
// 	strcpy(test2, "123456789");

// 	// Case 2: Overlapping memory (dest > src)
// 	printf("\nBefore (overlap):    %s\n", test2);
// 	ft_memmove(test2 + 2, test2, 5); // Move "12345" to position 2
// 	printf("After  (overlap):    %s\n", test2);

// 	return 0;
// }
