#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
*  _isdigit  - check the code
* @c: c is char variable
* Description: 'this program _isidigit case orupper case from a to z 10 times'
*  Return: Always 0 (Success)
*/

int _isdigit(int c)
{
	if (c  <= 57 && c > 47)
	{
		return (1);
	}
	return (0);
}
