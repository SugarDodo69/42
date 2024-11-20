/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboselli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:24:42 by vboselli          #+#    #+#             */
/*   Updated: 2024/11/19 10:24:44 by vboselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;

	p = s;
	if (n != 0)
	{
		while (n != 0)
		{
			if (*p == (unsigned char)c)
				return ((void *)p);
			p++;
			n--;
		}
	}
	return (0);
}
/*
#include <string.h>
#include <stdlib.h>

int main()
{
    // Caso 1: Carattere trovato in una stringa
    char str[] = "Hello, world!";
    char ch = 'o';
    size_t n = strlen(str);
    
    printf("Test 1: Carattere trovato (confronto tra ft_memchr e memchr)\n");
    void *ft_result = ft_memchr(str, ch, n);
    void *std_result = memchr(str, ch, n);
    printf("Carattere '%c' trovato in '%s':\n", ch, str);
    printf("ft_memchr: %s\n", ft_result ? "Trovato" : "Non trovato");
    printf("memchr: %s\n", std_result ? "Trovato" : "Non trovato");
    printf("Posizione trovata (ft_memchr): %p\n", ft_result);
    printf("Posizione trovata (memchr): %p\n", std_result);
    printf("\n");

    // Caso 2: Carattere non presente
    ch = 'z';
    printf("Test 2: Carattere non trovato\n");
    ft_result = ft_memchr(str, ch, n);
    std_result = memchr(str, ch, n);
    printf("Carattere '%c' non trovato in '%s':\n", ch, str);
    printf("ft_memchr: %s\n", ft_result ? "Trovato" : "Non trovato");
    printf("memchr: %s\n", std_result ? "Trovato" : "Non trovato");
    printf("\n");

    // Caso 3: Ricerca del primo carattere
    ch = 'H';
    printf("Test 3: Carattere trovato in prima posizione\n");
    ft_result = ft_memchr(str, ch, n);
    std_result = memchr(str, ch, n);
    printf("Carattere '%c' trovato in '%s':\n", ch, str);
    printf("ft_memchr: %s\n", ft_result ? "Trovato" : "Non trovato");
    printf("memchr: %s\n", std_result ? "Trovato" : "Non trovato");
    printf("\n");

    // Caso 4: Ricerca dell'ultimo carattere
    ch = '!';
    printf("Test 4: Carattere trovato in ultima posizione\n");
    ft_result = ft_memchr(str, ch, n);
    std_result = memchr(str, ch, n);
    printf("Carattere '%c' trovato in '%s':\n", ch, str);
    printf("ft_memchr: %s\n", ft_result ? "Trovato" : "Non trovato");
    printf("memchr: %s\n", std_result ? "Trovato" : "Non trovato");
    printf("\n");

    // Caso 5: N=0 (memoria vuota)
    char *empty = "";
    ch = 'a';
    printf("Test 5: Caso con memoria vuota (n = 0)\n");
    ft_result = ft_memchr(empty, ch, 0);
    std_result = memchr(empty, ch, 0);
    printf("Carattere '%c' in memoria vuota: \n", ch);
    printf("ft_memchr: %s\n", ft_result ? "Trovato" : "Non trovato");
    printf("memchr: %s\n", std_result ? "Trovato" : "Non trovato");
    printf("\n");

    // Caso 6: Buffer di memoria con byte ripetuti
    unsigned char buf[] = {0x01, 0x01, 0x01, 0x01};
    ch = 0x01;
    n = sizeof(buf);
    printf("Test 6: Ricerca di un byte ripetuto\n");
    ft_result = ft_memchr(buf, ch, n);
    std_result = memchr(buf, ch, n);
    printf("Carattere '%x' trovato in buffer ripetuto: \n", ch);
    printf("ft_memchr: %s\n", ft_result ? "Trovato" : "Non trovato");
    printf("memchr: %s\n", std_result ? "Trovato" : "Non trovato");
    printf("\n");

    return 0;
}*/
