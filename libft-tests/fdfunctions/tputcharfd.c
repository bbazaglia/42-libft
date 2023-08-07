#include <unistd.h>

// include your version of ft_putchar_fd() here

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int main(void)
{
    ft_putchar_fd('a', 1);
    return (0);
}