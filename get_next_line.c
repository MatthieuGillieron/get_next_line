/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:00:59 by mg                #+#    #+#             */
/*   Updated: 2024/10/22 21:06:40 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*read_n_stash(int fd, char *buf, char *stash)
{
	int		read_line;
	char	*tmp;

	read_line = 1;
	while (read_line)
	{
		read_line = read(fd, buf, BUFFER_SIZE);
		if (read_line == -1)
		{
			free(buf);
			return (NULL);
		}
		else if (read_line == 0)
			break ;
		buf[read_line] = '\0';
		if (!stash)
			stash = ft_strdup("");
		tmp = stash;
		stash = ft_strjoin(tmp, buf);
		free(tmp);
		tmp = NULL;
		if (ft_strchr (buf, '\n'))
			break ;
	}
	return (stash);
}

//extraire la ligne 


//checker cas d erreur dans gnl si la place


int main()
{
	
}



