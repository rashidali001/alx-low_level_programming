#include "main.h"

/**
 * _abs - converts to absolute value
 *
 * Return: absolute intger
 */
int  _abs(int para)
{
	int parameter  = para;

	if (parameter < 0)
		parameter = 0 - parameter;

	return parameter;
}
