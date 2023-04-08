/**
 * get_endianness - checks the endianness of a machine
 *
 * Return: 0 if big endianness and 1 if little endianness.
 */
int get_endianness(void)
{
	int test_num = 1;

	if (*((char *)&test_num) == 1)
		return (1);
	else
		return (0);
}
