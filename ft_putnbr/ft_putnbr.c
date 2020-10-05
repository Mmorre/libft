#include<unistd.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}

void    ft_putnbr(int nbr)
{
	unsigned int n;

	n = nbr;
	if(nbr < 0)
	{
		write(1,"-",1);
		n = -n;
	}
	if(n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	ft_putchar(n + '0');
}

int main()
{
	int i = -12345678;
	ft_putnbr(i);
	return 0;
}