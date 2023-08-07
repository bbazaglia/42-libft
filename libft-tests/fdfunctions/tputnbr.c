#include <unistd.h>

// include your version of ft_putnbr_fd() here
void	ft_putnbr_fd(int n, int fd)
{
    char number[4096];
    long int num;
    int i;

    num = n;
    i = 0;
	if (num == 0)
		write(fd, "0", 1);
	else if (num < 0)
	{
		write(fd, "-", 1);
		num = num * -1;
	}
	while (num > 0)
	{
		number[i] = (num % 10) + '0';
		i++;
		num /= 10;
	}
	while (--i >= 0)
	{
		write(fd, &number[i], 1);
	}
}

int main(void)
{
    ft_putnbr_fd(42, 1);
    write(1, "\n", 1);
    ft_putnbr_fd(-42, 1);
    write(1, "\n", 1);
    ft_putnbr_fd(0, 1);
    write(1, "\n", 1);
    ft_putnbr_fd(2147483647, 1);
    write(1, "\n", 1);
    ft_putnbr_fd(-2147483648, 1);
    return (0);
}