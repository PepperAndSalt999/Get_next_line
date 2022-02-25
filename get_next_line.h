/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpicot <rpicot@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/25 15:47:11 by rpicot        #+#    #+#                 */
/*   Updated: 2022/02/25 15:47:11 by rpicot        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <fcntl.h>
# include <limits.h>

char	*get_next_line(int fd);
char	*ft_strdup(char *string, int free_me, int super_len);
char	*newline(char *store);
char	*ft_calloc(int len);
int		ft_strcpy(char *dest, char *src, int len);
size_t	ft_strlen_bzero(char *string, int choice, int len);

#endif
