/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboselli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:41:05 by vboselli          #+#    #+#             */
/*   Updated: 2024/11/19 18:41:08 by vboselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n > 0)
	{
		*ptr = '\0';
		ptr++;
		n--;
	}
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	register void	*ptr;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	ptr = malloc (nmemb * size);
	if (ptr)
		ft_bzero (ptr, nmemb * size);
	return (ptr);
}
/*
#include <bsd/stdlib.h>

int main() 
{
    void *ft_ptr, *calloc_ptr;
    size_t nmemb, size;

    // Test 1: nmemb = 0, size = 0
    nmemb = 0;
    size = 0;
    ft_ptr = ft_calloc(nmemb, size);
    calloc_ptr = calloc(nmemb, size);
    printf("Test 1 - ft_calloc and calloc with nmemb=0, size=0:\n");
    printf("ft_calloc: %p, calloc: %p\n", ft_ptr, calloc_ptr);
    free(ft_ptr);
    free(calloc_ptr);

    // Test 2: nmemb = 0, size > 0
    nmemb = 0;
    size = 10;
    ft_ptr = ft_calloc(nmemb, size);
    calloc_ptr = calloc(nmemb, size);
    printf("Test 2 - ft_calloc and calloc with nmemb=0, size>0:\n");
    printf("ft_calloc: %p, calloc: %p\n", ft_ptr, calloc_ptr);
    free(ft_ptr);
    free(calloc_ptr);

    // Test 3: nmemb > 0, size = 0
    nmemb = 10;
    size = 0;
    ft_ptr = ft_calloc(nmemb, size);
    calloc_ptr = calloc(nmemb, size);
    printf("Test 3 - ft_calloc and calloc with nmemb>0, size=0:\n");
    printf("ft_calloc: %p, calloc: %p\n", ft_ptr, calloc_ptr);
    free(ft_ptr);
    free(calloc_ptr);

    // Test 4: Allocazione con valori normali
    nmemb = 5;
    size = 10;
    ft_ptr = ft_calloc(nmemb, size);
    calloc_ptr = calloc(nmemb, size);
    printf("Test 4 - with normal values nmemb=5, size=10:\n");
    printf("ft_calloc: %p, calloc: %p\n", ft_ptr, calloc_ptr);
    if (ft_ptr) {
        for (size_t i = 0; i < nmemb * size; i++) {
            printf("%02x ", ((unsigned char *)ft_ptr)[i]);
        }
        printf("\n");
    }
    if (calloc_ptr) {
        for (size_t i = 0; i < nmemb * size; i++) {
            printf("%02x ", ((unsigned char *)calloc_ptr)[i]);
        }
        printf("\n");
    }
    free(ft_ptr);
    free(calloc_ptr);

    // Test 5: Allocazione con numeri molto grandi (verifica overflow o limiti)
    nmemb = 1000000;
    size = 1000;
    ft_ptr = ft_calloc(nmemb, size);
    calloc_ptr = calloc(nmemb, size);
    printf("Test 5 - with large values nmemb=1000000, size=1000:\n");
    printf("ft_calloc: %p, calloc: %p\n", ft_ptr, calloc_ptr);
    free(ft_ptr);
    free(calloc_ptr);

    return 0;
}*/
