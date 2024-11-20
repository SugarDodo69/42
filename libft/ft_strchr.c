/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboselli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:31:39 by vboselli          #+#    #+#             */
/*   Updated: 2024/11/18 20:31:42 by vboselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (0);
}
/*
#include <bsd/stdio.h>
#include <bsd/string.h>
int main() 
{
   const char *str = "La rivoluzione non e' un pranzo di gala.";
   char ch = 'u';
   // Find the first occurrence of 'u' in the string
   char *q = ft_strchr(str, ch);
   char *p = strchr(str, ch);

   if (p != NULL) 
   {
       printf("String starting from '%c' is: %s\n", ch, p);
       printf("String starting from '%c' is: %s\n", ch, q);
   } 
   else 
   {
       printf("Character '%c' not found in the string.\n", ch);
   }
   return 0;
}*/
