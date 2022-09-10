#include<stdio.h>
#include<string.h>
/**
 * main - Entry point
 *
 * Return Always 0 (Success)
 */

int main(void){
	int n = 'A';
	int l;

	while(n <= 'Z')
	{
		l = tolower(n);
		n += 1;
	}
	putchar(l);
	return (0);
}
