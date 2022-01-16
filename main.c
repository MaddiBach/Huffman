/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddi <maddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 18:20:42 by maddi             #+#    #+#             */
/*   Updated: 2022/01/16 18:20:42 by maddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "huffman.h"

t_node *huffman(char *str)
{
    int i;
    t_table *table;
    t_node  *node;
    int nbchar;

    nbchar = nb_char(str);

    i = 0;
    node = parsing(str);    
    return (node);
}


int main(void)
{
    t_node *lst;
    int i = 0;

    lst = huffman("salut sssssc kessssnza");
    while(lst->right)
    {
        printf("char = %c\n", lst->c);
        printf("occurence = %d\n", lst->occur);
        lst = lst->right;
    }
    return (0);
}
