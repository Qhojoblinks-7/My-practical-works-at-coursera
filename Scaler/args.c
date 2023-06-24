#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;
	printf("\nProgram nam: %s", argv[0]);
	if (argc < 2)
	{
		printf("\n\nNo argument passed through command line!\n");
	}
	else
	{
		printf("\nArgumen supplied: ");
	}

	for (i = 1; i < argc; i++)
	{
		printf("%s\t", argv[i]);
	}
}
