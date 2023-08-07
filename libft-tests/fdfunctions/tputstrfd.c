#include <unistd.h>

// include your version of ft_putstr_fd() here
void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
		
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}

int main(void)
{
    ft_putstr_fd("Hello, world!", 1);
    return (0);
}