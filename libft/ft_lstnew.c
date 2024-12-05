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

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/* int main()
{
	int *data = malloc(sizeof(int));
	*data = 42;

	t_list *node = ft_lstnew(data);

	if(!node)
	{
		printf("There was a problem creating the list\n");
		return (1);
	}
	else
		printf("Data is: %d\nContent in new list is: %d\n",
		*data, *(int *)node->content);
	free(data);
	free(node);
	return (0);
} */
