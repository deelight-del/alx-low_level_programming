#include <stdio.h>
#include "calc.h"

/**
 * add - Function to add two integers
 * @a: operand a
 * @b: operand b
 *
 * Return: returns an integer
 */

int add(int a, int b)
{
	int c;

	c = a + b;
	return (c);
}

/**
 * sub - Function to substract two integers
 * @a: operand a
 * @b: operand b
 *
 * Return: returns an integer
 */

int sub(int a, int b)
{
	int c;

	c = a - b;
	return (c);
}

/**
 * mul - Function to multiply two integers
 * @a: operand a
 * @b: operand b
 *
 * Return: returns an integer
 */

int mul(int a, int b)
{
	int c;

	c = a * b;
	return (c);
}

/**
 * div - Function to divide two integers
 * @a: operand a
 * @b: operand b
 *
 * Return: returns an integer
 */

int div(int a, int b)
{
	int c;

	c = a / b;
	return (c);
}

/**
 * mod - Function to add two integers
 * @a: operand a
 * @b: operand b
 *
 * Return: returns an integer
 */

int mod(int a, int b)
{
	int c;

	c = a % b;
	return (c);
}
