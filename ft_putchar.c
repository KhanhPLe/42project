/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 22:26:20 by kle               #+#    #+#             */
/*   Updated: 2022/01/20 10:03:26 by kle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)

{
	write(1, &c, 1);
}
/*include<stdio.h>
 int main(void)
{
	ft_putchar('c');
	return(0);
}*/