#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
*  _isalpha  - check the code
* @c: c is char variable
* Description: 'this program _isalpha case orupper case from a to z 10 times'
*  Return: Always 0 (Success)
*/

int _isalpha(int c)
{
	if ((c <= 122 && c > 96) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
