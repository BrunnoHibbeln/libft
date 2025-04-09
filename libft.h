/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:09:21 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/04/09 15:02:02 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>

char	*ft_strdup(const char *s);
int		ft_atoi(const char *nptr);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *s);
int		ft_strlcat(char *dst, char *src, size_t size);
char	*ft_strlcpy(char *dst, const char *src, size_t size);

#endif
