/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboselli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:39:23 by vboselli          #+#    #+#             */
/*   Updated: 2024/11/18 12:39:37 by vboselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

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
/*
int main()
{
	char str1[50] = "Questa è una stringa di test!";
	printf("Prima di ft_bzero: '%s'\n", str1);
	ft_bzero(str1, 10);
	printf("Dopo ft_bzero: '%s'\n", str1);

	char str2[50] = "Questa è una stringa di test!";
	printf("Prima di bzero: '%s'\n", str2);
	bzero(str2, 10);
	printf("Dopo bzero: '%s'\n", str2);

	return 0;
}
*/
