/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboselli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:34:57 by vboselli          #+#    #+#             */
/*   Updated: 2024/11/18 11:37:33 by vboselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int in)
{
	return ((in >= 'a' && in <= 'z') || (in >= 'A' && in <= 'Z'));
}

#include <stdio.h>

void ft_print_result(int result)
{
    printf("%d", result);  // Non aggiungere '\n' o spazi, altrimenti non corrisponderà con l'output atteso
}

int main()
{
    char i = 'A';
    while (i <= 'Z')
    {
        ft_print_result(ft_isalpha(i));  // Stampa solo '1' o '0'
        i++;
    }
    return 0;
}
