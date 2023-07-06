/*
 * File: 100-get_endianness.c
 * Auth: Terrence M.K
 */

#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *c = (char *)&num;

	return (*c);
}

