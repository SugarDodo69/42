/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboselli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:16:43 by vboselli          #+#    #+#             */
/*   Updated: 2024/11/18 16:16:49 by vboselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdio.h>

void	*ft_memmove(void *dest, void *src, size_t N)
{
	char	*csrc;
	char	*cdest;
	char	temp[N];
	size_t	i;

	i = 0;
	csrc = src;
	cdest = dest;
	while (i < N)
	{
		temp[i] = csrc[i];
		i++;
	}
	i = 0;
	while (i < N)
	{
		cdest[i] = temp[i];
		i++;
	}
	return (cdest);
}
/*
#include<string.h> 
 
int main() 
{ 
char csrc[100] = "Revolucion o muerte!"; 
ft_memmove(csrc+5, csrc, strlen(csrc)+1); 
printf("%s", csrc); 
return 0; 
}*/
