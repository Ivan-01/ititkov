/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 08:45:49 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/17 09:23:39 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

void            ft_print_list(t_list *list);
t_list          *ft_create_elem(void *data);
t_list          *ft_push_params(int argc, char **argv);
int             ft_list_size(t_list *begin_list);

# endif
