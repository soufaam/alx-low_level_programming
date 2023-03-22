#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
*  _islower  - check the code
* @c: c is char variable
* Description: 'this program _islower case orupper case from a to z 10 times'
*  Return: Always 0 (Success)
*/

int _islower(int c)
{
	if (c  <= 122 && c > 96)
	{
		return (1);
	}
	return (0);
}
