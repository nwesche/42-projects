#include <unistd.h>

void	camel_to_snake(char *str)
{
	
}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		camel_to_snake(argv[1]);
	}
	write(1, "\n", 1);
	return(0);
}