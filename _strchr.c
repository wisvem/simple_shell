
/**
* _strchr - locate a character in  a string
* @s: source string
* @c: character
* Return: return a pointer to the first ocur +1
**/
char *_strchr(char *s, char c)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		if (s[j] == c)
			return (s + j + 1);
	}
	return ('\0');
}