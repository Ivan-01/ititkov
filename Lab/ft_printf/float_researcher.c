/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float_researcher.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 21:27:16 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/27 21:35:11 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(int argc, const char * argv[])
{
    float x = 1e18f;
    for(int i = 0; i < 30; ++i)
    {
        double delta = 1.0;
        for(int j = 0; j<i; ++j) delta *= 10.0;
        if (x != x+delta)
        {
            printf("delta = %f\n",delta);
            break;
        }
    }
}
