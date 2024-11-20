/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboselli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:19:35 by vboselli          #+#    #+#             */
/*   Updated: 2024/11/19 10:19:39 by vboselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	unsigned long long int	n;
	long long int			p;

	p = 1;
	n = 0;
	while ((*nptr == ' ' || (*nptr >= '\t' && *nptr <= '\r')))
	{
		nptr++;
	}
	if (*nptr == '-')
		p = -p;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		n = n * 10 + (*nptr - '0');
		if (n > 9223372036854775806 && p == 1)
			return (-1);
		if (n > 9223372036854775807 && p == -1)
			return (0);
		nptr++;
	}
	return (n * p);
}
/*
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	printf("%d\n", ft_atoi(argv[1]));
	printf("%d\n", atoi(argv[1]));
	printf("%ld\n", strtol(argv[1], NULL, 10));

	return argc;
}*/
