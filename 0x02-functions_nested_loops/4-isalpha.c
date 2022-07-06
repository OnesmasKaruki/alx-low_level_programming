#include "main.h"

/**
 * _isalpha -> checks alphabet character
 * @c: a character to be checked
 * Return: return 1 or 0 depending on the condution
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
