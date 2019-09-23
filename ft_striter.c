void	ft_striter(char *s, void (*f)(char*))
{
	char	*str;

	i = 0;
	str = s;
	if (s != NULL && f != NULL)
		while (*str)
		{
			(*f)(&(*str));
			str++;
		}
}
