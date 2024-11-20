/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboselli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:51:24 by vboselli          #+#    #+#             */
/*   Updated: 2024/11/19 10:51:26 by vboselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;
	size_t				i;

	i = 0;
	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
		{
			return (ptr1[i] - ptr2[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdlib.h>
int main()
{
    // Caso 1: Blocchi di memoria identici
    char str1[] = "Hello, world!";
    char str2[] = "Hello, world!";
    size_t n = strlen(str1);
    
    printf("T 1: Blocchi di memoria identici\n");
    int ft_result = ft_memcmp(str1, str2, n);
    int std_result = memcmp(str1, str2, n);
    printf("ft_memcmp: %d\n", ft_result);
    printf("memcmp: %d\n", std_result);
    printf("\n");

    // Caso 2: Primo blocco maggiore del secondo
    str2[7] = 'x';
    printf("T 2: Primo blocco maggiore del secondo\n");
    ft_result = ft_memcmp(str1, str2, n);
    std_result = memcmp(str1, str2, n);
    printf("ft_memcmp: %d\n", ft_result);
    printf("memcmp: %d\n", std_result);
    printf("\n");

    // Caso 3: Primo blocco minore del secondo
    str2[7] = 'z';
    printf("T 3: Primo blocco minore del secondo\n");
    ft_result = ft_memcmp(str1, str2, n);
    std_result = memcmp(str1, str2, n);
    printf("ft_memcmp: %d\n", ft_result);
    printf("memcmp: %d\n", std_result);
    printf("\n");*/
/*
    // Caso 4: Primo blocco = ai primi n-1 byte, diverso all'ultimo byte
    str2[12] = 'x';
    printf("T 4: Primo blocco = ai primi n-1 byte, diverso all'ultimo byte\n");
    ft_result = ft_memcmp(str1, str2, n);
    std_result = memcmp(str1, str2, n);
    printf("ft_memcmp: %d\n", ft_result);
    printf("memcmp: %d\n", std_result);
    printf("\n");

    // Caso 5: Comparazione con buffer vuoto (n = 0)
    printf("T 5: Comparazione con buffer vuoto (n = 0)\n");
    ft_result = ft_memcmp(str1, str2, 0);
    std_result = memcmp(str1, str2, 0);
    printf("ft_memcmp: %d\n", ft_result);
    printf("memcmp: %d\n", std_result);
    printf("\n");

    // Caso 6: Buffer di memoria con byte ripetuti (es. tutti 0x01)
    unsigned char buf1[] = {0x01, 0x01, 0x01, 0x01};
    unsigned char buf2[] = {0x01, 0x01, 0x01, 0x01};
    n = sizeof(buf1);
    printf("T 6: Buffer di memoria con byte ripetuti\n");
    ft_result = ft_memcmp(buf1, buf2, n);
    std_result = memcmp(buf1, buf2, n);
    printf("ft_memcmp: %d\n", ft_result);
    printf("memcmp: %d\n", std_result);
    printf("\n");

    // Caso 7: Buffer di memoria di diversa lunghezza
    unsigned char buf3[] = {0x01, 0x01, 0x01};
    unsigned char buf4[] = {0x01, 0x01, 0x01, 0x01};
    n = sizeof(buf3);
    printf("T 7: Buffer di diversa lunghezza\n");
    ft_result = ft_memcmp(buf3, buf4, n);
    std_result = memcmp(buf3, buf4, n);
    printf("ft_memcmp: %d\n", ft_result);
    printf("memcmp: %d\n", std_result);
    printf("\n");

    // Caso 8: Confronto con valori negativi
    char buf5[] = {0xFF, 0x01};
    char buf6[] = {0x01, 0xFF};
    n = sizeof(buf5);
    printf("T 8: Confronto con valori negativi\n");
    ft_result = ft_memcmp(buf5, buf6, n);
    std_result = memcmp(buf5, buf6, n);
    printf("ft_memcmp: %d\n", ft_result);
    printf("memcmp: %d\n", std_result);
    printf("\n");

    return 0;
}*/
/* //FUNZIONO ORIGINALE PER ARCH BSD. ERRORE SU T 8.
int
memcmp(const void *s1, const void *s2, size_t n) {
    if (n != 0) {
        const unsigned char *p1 = s1, *p2 = s2;
        do {
            if (*p1++ != *p2++)
                return (*--p1 - *--p2);
        } while (--n != 0);
    }
    return (0);
}
*/
