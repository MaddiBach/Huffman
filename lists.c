/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddi <maddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:57:32 by maddi             #+#    #+#             */
/*   Updated: 2022/01/16 17:57:32 by maddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "huffman.h"

t_node	*ft_lstnew(char c, int occur)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->c = c;
    new->occur = occur;
	new->left = NULL;
    new->right = NULL;
	return (new);
}

t_node	*ft_lstlast(t_node *lst)
{
	if (!lst)
		return (NULL);
	while (lst->right)
		lst = lst->right;
	return (lst);
}

void	ft_lstadd_back(t_node **firstnode, t_node *new)
{
	t_node	*node;

	if (firstnode && *firstnode)
	{
		node = *firstnode;
		node = ft_lstlast(*firstnode);
		node->right = new;
		return ;
	}
	*firstnode = new;
}

t_node  *parsing(char *str)
{
    t_node *firstnode;
    t_node *node;
    char letters[255];
    int i = 1;
    int occur = 0;

    ft_bzero(letters, 255);
    letters[255] = '\0';
    if (!str)
        return (NULL);
    occur = occurence(str[0], str);
    letters[(int)str[0]] = str[0];
    firstnode = ft_lstnew(str[0], occur);
    while (str[i])
    {
        if (str[i] != letters[(int)str[i]])
        {
            occur = occurence(str[i], str);
            node = ft_lstnew(str[i], occur);
            ft_lstadd_back(&firstnode, node);
            letters[(int)str[i]] = str[i];
        }
        i++;
    }
    firstnode = sort(firstnode);
    return (firstnode);
}