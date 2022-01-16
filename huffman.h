/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   huffman.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddi <maddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 23:50:45 by maddi             #+#    #+#             */
/*   Updated: 2022/01/14 23:50:45 by maddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


typedef struct s_node 
{
    char             c;
    int              occur;
    struct s_node    *left;
    struct s_node    *right;
}             t_node ;

typedef struct s_table
{
    char c;
    int *code;
}              t_table;



t_node	*ft_lstnew(char c, int occur);
t_node	*ft_lstlast(t_node *lst);
void	ft_lstadd_back(t_node **firstnode, t_node *new);
int     nb_char(char *str); // returns the number of different characters in one string
int occurence(char c, char *str); // returns the number of occurences of c character in a string
t_node  *parsing(char *str); // creates a linked list with each node containing a character and its number of occurences in a string;