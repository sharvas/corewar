/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vm.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfinnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 14:35:44 by dfinnis           #+#    #+#             */
/*   Updated: 2019/02/04 14:35:45 by dfinnis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vm.h"

void    print_arena(unsigned char *arena)
{
	int i;
	
	i = 0;
	ft_printf("0x%.4x : ", i);
	while(i < MEM_SIZE)
	{
		ft_printf("%.2x", (unsigned int)arena[i]);
		if (i == MEM_SIZE - 1)
			ft_printf("\n");
		else if (i && (i + 1) % 64 == 0)
			ft_printf("\n%#.4x : ", i + 1);
		else
			ft_printf(" ");
		i++;
	}
}

// void	read_args(int argc, char **argv)
// {
// 	int	i;

// 	i = 0;
// 	while (i < argc)
// 	{
// 		if (ft_strstr(argv[i], ".cor"))
// 			read_champion(argv[i]);
// 		else if (ft_strcmp((argv[i]), "-dump") == 0)
// 			read_dump(argv, i);
// 		else if (ft_strcmp((argv[i]), "-n") == 0)
// 			read_number(argv, i);
// 		else
// 			print_usage();
// 		i++;
// 	}
// }

int main(int argc, char **argv)
{
	argc = 0;//
	argv = NULL;//

	unsigned char   arena[MEM_SIZE];
	ft_bzero(arena, MEM_SIZE);
//	read_args(argc, argv);
	arena[20] = 'a';//
	print_arena(arena);
	return (0);
}