/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguisado <lguisado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:28:10 by lguisado          #+#    #+#             */
/*   Updated: 2022/10/20 16:07:51 by lguisado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	char			*str;
	unsigned char	chr;
	int				i;

	str = (char *) s;
	chr = (unsigned char) c;
	i = 0;
	if (!str)
		return (0);
	if (c == '\0')
		return (&str[ft_strlen(str)]);
	while (str[i])
	{
		if (str[i] == chr || str[i] == chr - 256)
			return (str + i);
		i++;
	}
	if (str[i] == chr)
	{
		return (str + i);
	}
	return (0);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*cdest;
	const char	*csrc;
	size_t		i;

	cdest = dst;
	csrc = src;
	i = 0;
	if (!cdest && !csrc)
		return (0);
	while (i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (cdest);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dlen;
	size_t	slen;

	i = 0;
	j = 0;
	while (dst[j])
		j++;
	while (src[i])
		i++;
	slen = i;
	dlen = j;
	if (dstsize == 0 || dstsize <= j)
		return (slen + dstsize);
	i = 0;
	while (src[i] && i < dstsize - dlen - 1)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (dlen + slen);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str1;
	char			*str2;
	char			*dest;
	unsigned int	slen;

	str1 = (char *) s1;
	str2 = (char *) s2;
	if (!str1)
	{
		str1 = malloc(sizeof(char) * 1);
		str1[0] = '\0';
	}
	if (!str1 || !str2)
		return (0);
	slen = ft_strlen(str1) + ft_strlen(str2);
	dest = malloc(sizeof(char) * (slen + 1));
	if (!dest)
		return (0);
	ft_memcpy(dest, str1, ft_strlen(str1) + 1);
	ft_strlcat(dest, str2, slen + 1);
	free (str1);
	return (dest);
}
