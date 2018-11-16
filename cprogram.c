#include <stdio.h>
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("%s\n", "pass your name as an argument");
		return -1;
	}
	else
	{
		printf("Hellow %s\n", argv[1]);
		return 0;
	}

}
