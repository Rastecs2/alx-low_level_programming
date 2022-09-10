#include<stdio.h>
#include<ctype.h>
/**
 * main - Entry point
 *
 * Return Always 0 (Success)
 */

int main(void){

	int n = 'A';
	int l;

	while (n <= 'Z')
	{
		l = tolower(n);
		putchar(l);
		n ++;
	}
	return (0);
}
