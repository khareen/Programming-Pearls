#include<stdio.h>

void intToBinary(int Int)
{
	if(Int/2)
	{
	  intToBinary(Int/2);
	}
	printf("%d",Int%2);
}
