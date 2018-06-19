
#include "get_next_line.h"

int main(int argc, char **argv)
{
	int			fd;
	int 		ret1;
	char		*line;
	char		*filename1;

	filename1 = "tests/test2.txt";
	line = NULL;

	if (argc == 2)
		fd = open(argv[1], O_RDONLY);
	else
		fd = open(filename1, O_RDONLY);
	if (fd == -1)
	{
		printf("open() error\n");
		return(0);
	}
	while ((ret1 = get_next_line(fd, &line)) == 1)
	{
		ft_putstr("GNL Ret: ");
		ft_putnbr(ret1);
		ft_putstr(" Line: ");
		ft_putendl(line);
		free(line);
	}
	ft_putstr("OUT GNL Ret: ");
	ft_putnbr(ret1);
	if (close(fd) == -1)
		printf("close() error");
	return (0);
}
