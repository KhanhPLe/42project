/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 22:20:55 by kle               #+#    #+#             */
/*   Updated: 2022/01/14 22:32:02 by kle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_alphabet(void)
{	
	char	ch;

	ch = 'a';
	while (ch <= 'z' )
	{
		write(1, &ch, 1);
		ch++;
	}
}

/*
#include<stdio.h>

int main()
{
	ft_print_alphabet();
return(0);
}*/
