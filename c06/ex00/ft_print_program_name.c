int	main(int argc, char **argv)
{
	char	*var;
	int	i;

	i = 0;
	var = argv[0];
	while (var[i])
	{
		write(1, &var[i], 1);
		i++;
	}
	return (0);
}
