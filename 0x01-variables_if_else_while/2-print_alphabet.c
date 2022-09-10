#include<stdio.h>

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
