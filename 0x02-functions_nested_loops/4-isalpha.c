#include "main.h"

/**
 * _isalpha - checks if a character is an alphabet
 * @ch: is the character to be checked
 * Return: 1 if ch is a member of alphabet, 0 if not
 */
int _isalpha(int ch)
{
	return (((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'));
}
