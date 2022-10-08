#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string to be concatinated
 * @s2: second string to be cancatinated with first
 * @n: bytes to add
 * Return: NULL (FAIL) pointer to string with s1 and n of s2(SUCCESS)
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, a, m;
	char *str;

	/*treat NULL as empty string*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = l2 = 0;
	/*length of both s1 & s2 respectively*/
	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;

	/*set n to length of s2*/
	if (n >= l2)
		n = l2;

	str = (char *) malloc((l1 + n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	/*add s1 to str*/
	for (a = 0; s1[a] != '\0'; a++)
		str[a] = s1[a];
	/*add s2 n bytes to str*/
	for (m = 0; m < n && s2[m] != '\0'; m++)
	{
		str[a] = s2[m];
		a++;
	}
	str[a] = '\0';
	return (str);
}
