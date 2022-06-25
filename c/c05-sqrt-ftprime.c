//MyPiscine1337BG--2022

#include<stdio.h>

int	ft_sqrt(int nb)
{
	long	sqrt;
	long	b;

	b = nb;
	
	if (b <= 0)
		return (0);
	if (b == 1)
		return (1);
	sqrt = 2;
	if (b >= 2)
	{
		while (sqrt * sqrt <= b)
		{
			if (sqrt * sqrt == b)
				return (sqrt);
			sqrt++;
		}
	}
	return (0);
}
////////////////////////////////////////////////////////
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if ((nb % i) == 0)
			return (0);
		else
			i++;
	}
	return (1);
}

int main()
{
    printf("%d\n", ft_sqrt(4));
    printf("%d\n", ft_is_prime(2));
}