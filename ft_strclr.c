void	ft_strclr(char *s)
{
	char	*str;

	if (s != NULL)
	{
		str = s;
		while (*str)
			{
				*str = 0;
				str++;
			}
	}
}