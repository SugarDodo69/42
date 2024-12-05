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

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/* int	main(void)
{
	t_list *head = NULL;
	t_list *second = NULL;
	t_list *third = NULL;

	head = malloc(sizeof(t_list));
	second = malloc(sizeof(t_list));
	third = malloc(sizeof(t_list));

	head->content = "First";
	head->next = second;

	second->content = "Second";
	second->next = third;

	third->content = "Third";
	third->next = NULL;

	int size = ft_lstsize(head);
	printf("Size of the linked list: %d\n", size);

	free(head);
	free(second);
	free(third);

	return (0);
} */
