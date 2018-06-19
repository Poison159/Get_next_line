
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 32

# include "libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct	s_line
{
	char	*fnd;
	int		red;
	int		i;
	int		cnt;
	int		ret;
}				t_line;

void			endl_count(char *buff, t_line *li);
void			retemp(char ***temp);
void			rdr(const int fd, t_line *li, char **temp);
void			mvr(char **line, char **temp, t_line *li);
int				get_next_line(const int fd, char **line);

#endif
