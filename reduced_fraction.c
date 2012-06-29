#include<stdio.h>
#include"gcd.h"

struct fraction 
{int num;
int den;};

struct fraction reducedFrac(struct fraction F){
	int Gcd;
	Gcd = gcd(F.num,F.den);
	F.num = F.num/Gcd;
	F.den = F.den/Gcd;
return F;
}


void main()

{
	struct fraction F;
	struct fraction red_F;
	scanf("%d %d", &F.num, &F.den);
	red_F = reducedFrac(F);
	printf("%d %d", red_F.num, red_F.den);

}

