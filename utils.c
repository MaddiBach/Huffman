/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddi <maddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 18:02:51 by maddi             #+#    #+#             */
/*   Updated: 2022/01/16 18:02:51 by maddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "huffman.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*s_cpy;

	s_cpy = s;
	while (n--)
		*s_cpy++ = 0;
}

int occurence(char c, char *str)
{
    int occur = 0;
    int i = 0;

    while (str[i])
    {
        if (str[i] == c)
            occur++;
            i++;
    }
    return (occur);
}

int     nb_char(char *str)
{
    char letter[255];
    int nbchar;
    int i;

    nbchar = 0;
    i = 0;
    while (str[i])
    {
        if (str[i] != letter[(int)str[i]])
        {
            nbchar++;
            letter[(int)str[i]] = str[i];
        }
        i++;
    }
    return (nbchar);
}