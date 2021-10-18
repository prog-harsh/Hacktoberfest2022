#include <stdio.h>
#include <stdlib.h>

int	ft_tolower(int c)
{
	unsigned char a;

	a = (unsigned char)c;
	if ((c >= 256) || (c <= 0))
		return (c);
	if ((a < 65) || (a > 90))
		return (a);
	return (a + 32);
}

int	main(int argc, char **argv)
{
	int i;
    
    i = 0;
    if (argc != 2)
    {
		printf("You must introduce executable plus one string between quotes (example: ./a.out \"I WAnt THIS STRING IN LOWer LETTERS\")\n");
        exit (0);
    }
    printf("Lets do it --> ");
    while(argv[1][i] != '\0')
    {
        printf("%c", ft_tolower(argv[1][i++]));
    }
    printf("\n");
    return (0);
}