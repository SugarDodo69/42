/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboselli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 21:36:34 by vboselli          #+#    #+#             */
/*   Updated: 2024/11/19 21:36:37 by vboselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

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

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*csrc;
	unsigned char	*cdest;
	size_t			i;

	i = 0;
	csrc = (unsigned char *)src;
	cdest = (unsigned char *)dest;
	while (i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (cdest);
}

char	*ft_strdup(const char *str)
{
	size_t	size;
	char	*dest;

	size = ft_strlen(str) + 1;
	dest = malloc(size);
	if (dest == 0)
		return (0);
	(void)ft_memcpy(dest, str, size);
	return (dest);
}
/*
#include <stdio.h>

int main(void)
{
    // Test su vari casi
    const char *test_cases[] = {
        "Hello, world!",
        "",
        "A",
        "Long string with multiple words and spaces.",
        "Special chars: !@#$%^&*()_+=-`~<>?/.,",
        NULL
    };
    
    for (int i = 0; i < 6; i++) {
        const char *test_case = test_cases[i];
        
        // Test ft_strdup
        char *ft_dup = ft_strdup(test_case);
        if (ft_dup) {
            printf("ft_strdup: %s\n", ft_dup);
            free(ft_dup);
        } else {
            printf("ft_strdup: NULL\n");
        }

        // Test strdup (standard library)
        char *lib_dup = strdup(test_case);
        if (lib_dup) {
            printf("strdup: %s\n", lib_dup);
            free(lib_dup);
        } else {
            printf("strdup: NULL\n");
        }

        printf("\n");
    }

    // Test su caso di allocazione fallita
    char *str = "Test string for malloc failure simulation";
    return 0;
}*/
