#include<stdio.h>
#include"gcd.h"

int main()

{
	
	char s[50];
	char temp;
	int i,len,j,start;
	printf("Enter a string!");
	scanf("%s",s);
	printf("By how much should it be rotated");
	scanf("%d",&i);
	for(len=0;s[len] != '\0';len++);
			
	/*computing the starting position for the vector rotation*/
	
	/* Code begin for vector rotation */
	
	for( start = 0; start != gcd(len,i); start++ )
	{
	temp = s[start];
	j = i;
	s[start] = s[(start+j)%len];	
		while((start+j)%len != start)
		{
			s[(start+j)%len] = s[(start+j+i)%len];
			j = j+i;		
		}	
	s[(start+j-i)] = temp;
	}
	printf("%s",s);	
	return 0;
}
