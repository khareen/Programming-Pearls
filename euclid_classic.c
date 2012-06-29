#include<stdio.h>

int gcd(int u, int v)

{
	int t;
	while(u > 0)
		{
			if( u < v )
				{t = u; u = v; v = t;}
			u = u%v;
		}			
	return v;

}

void main()

{
 int x, y;

scanf("%d %d",&x,&y);
printf("%d %d \n %d %d", x, y, x%y ,gcd(x,y));
}
