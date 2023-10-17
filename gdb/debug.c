#include <stdio.h>
#include <stdlib.h>

int mystery_func(int n);

int main(int argc, char **argv) {
	if (argc < 2) {
		return EXIT_FAILURE;
	}
	int n = atoi(argv[1]); // no error checking -- bad!
	int new_n = 0;
	new_n = mystery_func(n);
	printf("new_n = %d\n", n); // looks like someone made a typo
	return EXIT_SUCCESS;
}
