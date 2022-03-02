/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 22:05:51 by kle               #+#    #+#             */
/*   Updated: 2022/01/14 23:08:21 by kle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	ch;

	ch = 'z' ;
	while ('a' <= ch)
	{
		write(1, &ch, 1);
		ch--;
	}
}
/*
#include<stdio.h>
int main()
{
	ft_print_reverse_alphabet();
	return(0);
}*/
