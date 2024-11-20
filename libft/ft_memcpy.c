/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboselli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:42:34 by vboselli          #+#    #+#             */
/*   Updated: 2024/11/18 15:42:41 by vboselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdio.h>

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
/*
#include<string.h>

int main() 
{ 
char csrc[] = "O Socialismo o barbarie!"; 
char cdest[100]; 
ft_memcpy(cdest, csrc, strlen(csrc)+1); 
printf("Copied string is %s", cdest); 

int isrc[] = {10, 20, 30, 40, 50}; 
int n = sizeof(isrc)/sizeof(isrc[0]); 
int idest[n], i; 
ft_memcpy(idest, isrc, sizeof(isrc)); 
printf("\nCopied array is "); 
for (i=0; i<n; i++) 
    printf("%d ", idest[i]); 
return 0; 
}*/
