#include "main.h"
/**
  * set_string - sets the value of a pointer to a char
  * @s: source address of the value
  * @to: the value address to assign
  *
  * Return: ---
  */
void set_string(char **s, char *to)
{
	*s = to;
}
