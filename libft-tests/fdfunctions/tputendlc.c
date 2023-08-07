#include <unistd.h>

// include your version of ft_putendl_fd() here

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
		
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, "\n", 1);
}

int main(void)
{
    ft_putendl_fd("Hello, world!", 1);
    return (0);
}