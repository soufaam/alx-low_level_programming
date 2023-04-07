#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
*  _isupper  - check the code
* @c: c is char variable
* Description: 'this program _isupper case orupper case from a to z 10 times'
*  Return: Always 0 (Success)
*/

int _isupper(int c)
{
	if (c  <= 90 && c > 64)
	{
		return (1);
	}
	return (0);
}
