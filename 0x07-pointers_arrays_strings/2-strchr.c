char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	if (*(s + i) == c)
		return ((s + i));
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return ((s + i));
		}
		i++;
	}
	return (0);
}
