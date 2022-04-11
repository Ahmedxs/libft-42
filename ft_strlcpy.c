/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmohame <ahmohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 15:53:23 by ahmohame          #+#    #+#             */
/*   Updated: 2022/04/11 16:42:11 by ahmohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	c1;
	size_t	c2;

	c1 = 0;
	len = ft_strlen(src);
	if (dstsize == 0)
		return (len);
	c2 = dstsize - 1;
	while (c2 > 0 && src[c1] != '\0')
	{
		dst[c1] = src[c1];
		c1++;
		c2--;
	}
	dst[c1] = '\0';
	return (len);
}
