/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 15:02:06 by hgoncalv          #+#    #+#             */
/*   Updated: 2020/10/27 16:31:48 by hgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int count_digits(int number){
	long long n;
	int count;

	count=0;

	while (n != 0) 
	{
        n = n/10;
        ++count;
    }
	return count;
}

_Bool in_array(int value_to_check,int arr[]){
	int length_array;
	length_array= sizeof(arr)/sizeof(arr[0]);
	while(i<length_array){
		if(arr[i]==value_to_check){
			return true;	
		}
		i++;
	}
	return false;
}
void	ft_print_numbers(void)
{
	char	c;
	int		i;

	i = 0;
	while (i < 10)
	{
		c=i+'0';
		ft_putchar(c);
		i++;
	}
}
int main(){
	char pb='\n';
	int i;
	int j;
	int k;
	char a;
	char b;
	char c;
	int soma;
	int arr[120];
	unsigned int last_added_index;

	i=0;
	j=0;
	k=0;
	last_added_index=-1;

	while (i<10){
		a=i+'0';	
		while (j<10){
			b=j+'0';
			while (k<10){
				c=k+'0';
				soma=i+j+k;
				if(!in_array(soma,arr)){
					ft_putchar(a);
					ft_putchar(b);
					ft_putchar(c);
					ft_putchar(pb);
					last_added_index++;
					arr[last_added_index]=soma;
				}
				k++;
			}
			j++;
			k=0;
		}
		j=0;
		i++;
	}

	/*
	int number;
	printf("Type in a number \n");
	scanf("%d", &number);
	printf("The number you typed was %d\n", number);
	ft_enumerate_numbers(number);
	*/
	return 0;
	
}
