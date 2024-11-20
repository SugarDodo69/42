/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboselli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:45:06 by vboselli          #+#    #+#             */
/*   Updated: 2024/11/19 11:45:10 by vboselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (little[j] != '\0' && big[i + j] == little[j]
				&& (i + j) < len)
			{
				j++;
			}
			if (little[j] == '\0')
				return ((char *)big + i);
		}
		i++;
	}
	return (0);
}
/*
#include <bsd/string.h>
#include <stdlib.h>

int main()
{
    const char *big = "Viva Mao!";
    const char *little = "	";
    size_t len = 15;  // Limite di ricerca nella stringa "big"

    // Usa ft_strnstr
    char *ft_result = ft_strnstr(big, little, len);
    printf("Risultato ft_strnstr: ");
    if (ft_result)
        printf("\"%s\"\n", ft_result);  // Stampa la sottostringa trovata
    else
        printf("NULL\n");

    // Usa strnstr (funzione standard, se disponibile)
    char *std_result = strnstr(big, little, len);
    printf("Risultato strnstr: ");
    if (std_result)
        printf("\"%s\"\n", std_result);  // Stampa la sottostringa trovata
    else
        printf("NULL\n");

    // Confronta i risultati
    if (ft_result == std_result)
        printf("Le due funzioni hanno restituito lo stesso risultato.\n");
    else
        printf("Le due funzioni hanno restituito risultati diversi.\n");

    return 0;
}*/
