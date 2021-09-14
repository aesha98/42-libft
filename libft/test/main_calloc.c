#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void *ft_calloc(size_t n, size_t size);

int main(void)
{
	char *word = "aeshaa";
	char *ptr;

	ptr = (char *)ft_calloc(6, sizeof(char));
	if (ptr == NULL)
	{
		printf("failed to allocate memory");
		exit(0);
	}
	strcpy(ptr, word);
	printf("after ft_calloc : %s\n", ptr);
	free(ptr);
	return (0);
}
