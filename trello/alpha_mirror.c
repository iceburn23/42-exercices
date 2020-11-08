#include <stdio.h>
#include <unistd.h>

int is_lower(char c)
{
	if(c >= 'a' && c <= 'z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int is_upper(char c)
{
	if(c >= 'A' && c <= 'Z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void ft_putchar(char c)
{
	write(1,&c,1);
}

char caps_change(char c)
{
	if (is_lower(c) == 1){	return (c + 32);}
	if (is_upper(c) == 1){	return (c - 32);}
	else return(c);
}

int ft_atoi(char *c)
{
	int num;
	int signal;

	num		= 0;
	signal = 1;
	while(*c)
	{
		if(*c == '-')
		{	
			signal = -1;
			c++;
			continue;

		}
		num *= 10;
		(*c>='0' && *c<='9')? num += (*c - '0'):0;
		c++;
	}
	return (signal * num);
}

char *alpha_mirror(char *str)
{	
	char midle;

	while(*str)
	{
		if(is_lower(*str) == 1)
		{
			ft_putchar( 'm' + 'n' - *str); 		
		}
		else if(is_upper(*str) == 1)
		{
			ft_putchar( 'M' + 'N' - *str); 		
		}
		else
		{
			ft_putchar(*str);
		}
	//abcdefghijkl mn opqrstuvwxyz
		str++;
	}
	return str;
}


int main(int argc,char **argv)
{
	if(argc == 2)
	{
		char *str_input = argv[1];
		printf("alpha_mirror: \n"); 
		alpha_mirror(str_input);
		printf("\n..................\n");
		printf("atoi:\n%d", ft_atoi(str_input));
		printf("\n");
	}
	
	write(1,&"\n",1);
	return 0;
}
