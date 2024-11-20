/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboselli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:58:30 by vboselli          #+#    #+#             */
/*   Updated: 2024/11/18 18:58:34 by vboselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dst[i] != '\0')
	{
		i++;
	}
	if (size <= i)
		return (size + ft_strlen(src));
	j = 0;
	while (j < size - i - 1 && src[j] != '\0')
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	while (src[j] != '\0')
	{
		j++;
	}
	return (i + j);
}
/*
#include <bsd/string.h>

int main() {
    char dst[20] = "Viva ";
    char dst2[20] = "Viva ";
    const char *src = "Mao! XXXXXXXXXXXXXXXXXXXXX";
    size_t size = 20;

    size_t result = ft_strlcat(dst, src, size);
    printf("Result: %zu\n", result);
    printf("Dst: %s\n", dst);
    
    size_t result2 = strlcat(dst2, src, size);
    printf("Result 2: %zu\n", result2);
    printf("Dst 2: %s\n", dst2);
    return 0;
}*/
