# 0x0A. C - argc, argv

## 0. It ain't what they call you, it's what you answer to

A `c` program that prints its name, followed by a new line. If the program is renamed without having to compile it again, it will print the new name.

```
#include "main.h"

/**
 * main - Enrty point
 * Return: Sucess is 0.
 */

int main(argc, *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
```

Actual solution in [0-whatsmyname.c](./0-whatsmyname.c)
