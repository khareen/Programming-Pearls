int gcd(int u, int v)
{
	int t;	
	while(u > 0)
	{
		if(u < v)
		{
			t = v; v = u; u = t;  	
		
		}
		u = u%v;
	}
return v;
}
