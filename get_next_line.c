/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:00:59 by mg                #+#    #+#             */
/*   Updated: 2024/10/22 14:31:08 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	read_n_stash(int fd,char *buf, char *stash)
{
	int	read_line;
	int	bytes_read;

	buf = malloc(sizeof(char) *  (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	while (1)
	{
		bytes_read = read(fd, buf, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(buf);
			return (NULL);
		}
		else if (bytes_read == 0)
			break;
		buf[bytes_read] = '\0';
		if (!stash)
			stash = ft_strdup("");
	}
	read_line = ft_strjoin(buf, bytes_read);
	return (read_line);
}


int main()
{
	
}