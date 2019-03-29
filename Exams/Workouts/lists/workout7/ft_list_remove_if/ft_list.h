/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 08:09:09 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/21 09:27:24 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct    	s_list
{
    struct s_list 	*next;
    void          	*data;
}                 	t_list;

t_list              *ft_create_elem(void *data);
void                ft_print_list(t_list *list);
t_list              *ft_push_params(int argc, char **argv);

void       ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

#endif
