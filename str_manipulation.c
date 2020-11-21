#include "awshell.h"

/**
* _strcat - concatenates two strings
* @dest: destiny
* @src: source
* Return: concatenated string
*                     _
*     /\             | |
*    /  \   _ __   __| |_   _
*   / /\ \ | '_ \ / _` | | | |
*  / ____ \| | | | (_| | |_| |
* /_/    \_\_|_|_|\__, |\__, | _   _
* \ \        / (_)   | | __/ || \ | |
*  \ \  /\  / / _ ___| ||___/ |  \| |
*   \ \/  \/ / | / __| __/ _ \| . ` |
*    \  /\  /  | \__ \ || (_) | |\  |
*     \/  \/   |_|___/\__\___/|_| \_| |- Nov 2020 -|
*
*/
char *_strcat(char *dest, char *src)
{
	int sizedest = 0, sizesrc = 0;

	while (dest[sizedest] != '\0')
	{
		sizedest++;
	}
	while (src[sizesrc] != '\0')
	{
		dest[sizedest] = src[sizesrc];
		sizesrc++;
		sizedest++;
	}
	dest[sizedest] = '\0';
	return (dest);
}

/**
 * _strchr - locate a character in  a string
 * @s: source string
 * @c: character
 * Return: return a pointer to the first ocur +1
 *                     _
 *     /\             | |
 *    /  \   _ __   __| |_   _
 *   / /\ \ | '_ \ / _` | | | |
 *  / ____ \| | | | (_| | |_| |
 * /_/    \_\_|_|_|\__, |\__, | _   _
 * \ \        / (_)   | | __/ || \ | |
 *  \ \  /\  / / _ ___| ||___/ |  \| |
 *   \ \/  \/ / | / __| __/ _ \| . ` |
 *    \  /\  /  | \__ \ || (_) | |\  |
 *     \/  \/   |_|___/\__\___/|_| \_| |- Nov 2020 -|
 *
 */
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

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: res
 *                     _
 *     /\             | |
 *    /  \   _ __   __| |_   _
 *   / /\ \ | '_ \ / _` | | | |
 *  / ____ \| | | | (_| | |_| |
 * /_/    \_\_|_|_|\__, |\__, | _   _
 * \ \        / (_)   | | __/ || \ | |
 *  \ \  /\  / / _ ___| ||___/ |  \| |
 *   \ \/  \/ / | / __| __/ _ \| . ` |
 *    \  /\  /  | \__ \ || (_) | |\  |
 *     \/  \/   |_|___/\__\___/|_| \_| |- Nov 2020 -|
 *
 */
int _strcmp(char *s1, char *s2)
{
	int sub;
	int x = 0;

	while (s1[x] == s2[x] && s1[x] != '\0')
	{
		sub = 0;
		x++;
	}
	sub = s1[x] - s2[x];
	return (sub);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: a copy of str
 *                     _
 *     /\             | |
 *    /  \   _ __   __| |_   _
 *   / /\ \ | '_ \ / _` | | | |
 *  / ____ \| | | | (_| | |_| |
 * /_/    \_\_|_|_|\__, |\__, | _   _
 * \ \        / (_)   | | __/ || \ | |
 *  \ \  /\  / / _ ___| ||___/ |  \| |
 *   \ \/  \/ / | / __| __/ _ \| . ` |
 *    \  /\  /  | \__ \ || (_) | |\  |
 *     \/  \/   |_|___/\__\___/|_| \_| |- Nov 2020 -|
 *
 */
char *_strdup(char *str)
{
	unsigned int i = 0, j;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	ptr = malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		ptr[j] = str[j];
	}
	return (ptr);
}

/**
 * _strlen - calculate lenght of a string
 * @s: char vector
 * Return: the lenght of @s
 *                     _
 *     /\             | |
 *    /  \   _ __   __| |_   _
 *   / /\ \ | '_ \ / _` | | | |
 *  / ____ \| | | | (_| | |_| |
 * /_/    \_\_|_|_|\__, |\__, | _   _
 * \ \        / (_)   | | __/ || \ | |
 *  \ \  /\  / / _ ___| ||___/ |  \| |
 *   \ \/  \/ / | / __| __/ _ \| . ` |
 *    \  /\  /  | \__ \ || (_) | |\  |
 *     \/  \/   |_|___/\__\___/|_| \_| |- Nov 2020 -|
 *
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
