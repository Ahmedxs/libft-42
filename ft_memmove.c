/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmohame <ahmohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:00:49 by ahmohame          #+#    #+#             */
/*   Updated: 2021/12/19 15:52:14 by ahmohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = ((unsigned char *)dst);
	s = ((const unsigned char *)src);
	if (d == s)
		return (dst);
	else if (d > s)
	{
		d += len - 1;
		s += len - 1;
		while (len > 0)
		{
			*d = *s;
			s--;
			d--;
			len--;
		}
	}
	else
		ft_memcpy(d, s, len);
	return (dst);
}
