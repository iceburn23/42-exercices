/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 15:25:59 by hgoncalv          #+#    #+#             */
/*   Updated: 2020/10/27 14:00:21 by hgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

typedef enum {false, true} bool;

void	ft_print_comb(void)
{
	int  i, j, k, l,numer;
	char a,b,c;
	bool in_array;
	i=0;
	j=0;
	k=0;
	int soma;
	int arr[0];
	char lb;
	lb= '\n';
	int length_of_arr;
	while (i<10)
	{
		j=0;
		k=0;
		in_array=false;
		while (j<10)
		{
			k=0;
		if(j==i) 
		{
			j++;
			continue;
		} 
			printf("%d\t", arr[10]);
			while (k<10){
				if(j==i || k==j || k==i)
			{ 
				k++;
				continue;
			}
				a=i+ '0';
				b=j+ '0';
				c=k+ '0';

				l=0;
				soma=i+j+k;
		
				length_of_arr=sizeof arr / sizeof arr[0];		
    	
		while( l <= length_of_arr){
        	if(arr[l] == soma) {
				in_array=true;
				break;
			}else{
				in_array=false;
			}
			l++;
		}
		if(in_array==false){
				arr[length_of_arr]=soma;
		//		write(1, &a,1);
		//		write(1, &b,1);	
		//		write(1, &c,1);
				
		//		write(1, &lb,1);
		}
		k++;
			}
			j++;
		}
		i++;
	}
}

int		main(void)
{
	ft_print_comb();
	return (0);
}
