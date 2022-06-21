int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	destlen;

	i = 0;
	destlen = ft_strlen(dest);
	while (src[i])
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (dest);
}

int	calcule_size(int size, char **strs, char *sep)
{
	int	i;
	int	res;

	if (size == 0)
		return (1);
	i = 0;
	res = 0;
	while (i < size)
		res += ft_strlen(strs[i++]);
	res += ft_strlen(sep) * (size - 1);
	return (res + 1);
}


char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;

	res = malloc(calcule_size(size, strs, sep) * sizeof(char));
	if (!res)
		return (NULL);
	res[0] = 0;
	if (size == 0)
		return (res);
	i = 0;
	while (i < size)
	{
		ft_strcat(res, strs[i]);
		if (i != size - 1)
			ft_strcat(res, sep);
		i++;
	}
	res[ft_strlen(res)] = 0;
	return (res);
}


int main()
{
	int		index;
	char	**strs;
	char	*separator;
	char	*result;
	int	size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 4 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 4 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 8 + 1);
	strs[0] = "1337";
	strs[1] = "FIL:";
	strs[2] = " Yassine";
	separator = " ";
	result = ft_strjoin(size, strs, separator);
	printf("%s$\n", result);
    return 0;
}
