/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 14:22:19 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/06/24 16:49:47 by alcristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				num;
	struct s_list	*next;
}					t_list;

double	ft_entropy(t_list *a);
void	ft_swap(t_list *lst);
void	ft_push(t_list *to, t_list *from);
void	ft_rotate(t_list **lst);
void	ft_rrotate(t_list **lst);
void	ft_multiple(t_list *a, t_list *b, int mov);
t_list	*ft_create_stack(char **argv);
void	ft_algo_fewnums(t_list *a);
void	ft_algo_simple(t_list *a);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstnew(int content);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);

#endif
