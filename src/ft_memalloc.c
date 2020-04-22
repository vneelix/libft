#include "libft.h"

void	*ft_memalloc(size_t n)
{
	void	*ret;

	if ((ret = malloc(n)) == NULL)
		return (NULL);
	ft_bzero(ret, n);
	return (ret);
}
