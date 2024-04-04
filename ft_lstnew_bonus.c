/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 12:21:36 by claprand          #+#    #+#             */
/*   Updated: 2024/04/04 15:32:55 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION :
	The function ft_lstnew allocates memory for a new list node and 
	initializes its content to the value passed as parameter, before
	setting its next node to NULL. 

	RESULT VALUE :
	The new list ode.
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(1 * sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*
#include <stdio.h>
int main() 
{
	char *str = "Hello, world!";
	t_list *node_str = ft_lstnew(str);
	printf("%s\n", (char *)node_str->content);

	int num = 42;
	t_list *node_int = ft_lstnew(&num);
	printf("%d\n", *((int *)node_int->content));

	free(node_str);
	free(node_int);
	return 0;
}
*/