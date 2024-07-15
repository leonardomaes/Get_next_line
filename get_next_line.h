/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 10:52:43 by lmaes             #+#    #+#             */
/*   Updated: 2024/06/04 12:10:38 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

// Main functions
char	*get_next_line(int fd);
char	*get_line(int fd, char *backup);
char	*dup_line(char *backup);
char	*new_line(char *backup);

// Utils functions
char	*ft_strchr(const char *str, int c);
char	*ft_strjoin(char *buffer, char *content);
char	*ft_strdup(const char *s);
size_t	ft_strlen(const char *str);

#endif
