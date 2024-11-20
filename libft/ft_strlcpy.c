/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboselli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:43:26 by vboselli          #+#    #+#             */
/*   Updated: 2024/11/18 17:43:33 by vboselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
		dst[i] = '\0';
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <bsd/string.h>

int main() {
    char dst[20];
    const char *src = "Viva Mao! xxxxxxxxxxxxxxxxxxxxx";

    printf("Stringa sorgente: %s\n", src);
    printf("Dimensione buffer dst: %zu\n", sizeof(dst));

    size_t result = ft_strlcpy(dst, src, sizeof(dst));

    printf("Stringa destinazione dopo copia: %s\n", dst);
    printf("Lunghezza della stringa sorgente: %zu\n", result);

    char dst_standard[20];
    size_t result_standard = strlcpy(dst_standard, src, sizeof(dst_standard));
    printf("\nConfronto con strlcpy standard:\n");
    printf("Stringa destinazione (strlcpy): %s\n", dst_standard);
    printf("Lunghezza (strlcpy): %zu\n", result_standard);

    return 0;
}*/
