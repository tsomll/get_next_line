/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvioleta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:22:56 by vvioleta          #+#    #+#             */
/*   Updated: 2021/11/16 12:22:59 by vvioleta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <stddef.h>
# include <unistd.h>

size_t	ft_strlen(const char *n);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(const char *src);
char	*ft_fd_read(int fd, char *ost);
char	*ft_line(char *ost);
char	*ft_new_line(char **ost);
char	*get_next_line(int fd);

#endif
