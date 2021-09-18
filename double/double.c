#include <unistd.h>

void ft_del(char *str)
{
	int	i;
	int	j;
	int k;

	i = 1;
	j = 0;
	k = 0;
	write(1, &str[0], 1);
	while (str[i] != '\0')
	{
		while (j < i)
		{
			if (str[i] == str[j])
				k = 1;
			j++;
		}
		j = 0;
		if (k == 0)
			write(1, &str[i], 1);
		k = 0;
		i++;

	}
	

}

int main(int argc, char **argv)
{
	(void) argc;
	if (argc != 2)
		return (0);
	ft_del(argv[1]);
	return (0);

}
