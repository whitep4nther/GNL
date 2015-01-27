/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihermell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 14:33:42 by ihermell          #+#    #+#             */
/*   Updated: 2014/12/04 18:33:50 by ihermell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE			4096

# define FT_SWAP(x, y, z) {z = x; x = y; if (z != x) {free(z);}}

# include "libft.h"

typedef struct				s_buff
{
	int						read;
	int						last_line;
	char					*buff;
	int						len;
}							t_buff;

int						get_next_line(int const fd, char **line);

#endif
