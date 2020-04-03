#include "libft.h"

char*	ft_strndup(const char *s1, size_t n)
{
	char*	ret;
	size_t	len;

	len = ft_strlen(s1);
	len = (n > len ? len : n);
	if ((ret = (char*)malloc(len + 1)) == NULL)
		return (NULL);
	ft_strncpy(ret, s1, len);
	return (ret);
}