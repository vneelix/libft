#include "libft.h"

char	*ft_ultoa(unsigned long n)
{
	int		i;
	char	storage[21];

	i = 19;
	ft_bzero(storage, 21);
	while (n != 0 || (i == 19 && n == 0))
	{
		storage[i--] = n % 10 + '0';
		n /= 10;
	}
	i += 1;
	return (ft_strdup(storage + i));
}
