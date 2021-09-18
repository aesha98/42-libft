#include <stdio.h>

char **ft_split(char const *s, char c);

int	main(void)
{
	char string[] = {"aesha-is-awesome"};
	char string2[] = {"Little Mix-is-awesome"};
	char delimeter = '-';

	printf("Original : %s\n",string);
	printf("delimeter : %c\n", delimeter);
	ft_split(string, delimeter);
	printf("Split : %s\n", string)
	
	printf("\n");

	printf("Original : %s\n", string2);
	printf("delimeter : %c\n",delimeter);
	ft_split(string2, delimeter);
	printf("Split : %s\n", string2);
}
