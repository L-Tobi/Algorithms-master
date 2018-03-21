#include <bitset>
#include <iostream>
template<int n = 10>
std::bitset<n+1> BinaryAdd(std::bitset<n> a, std::bitset<n> b)
{
	std::bitset<n + 1> c;
	if (a.count() == 0 && b.count() == 0 )
	{
		return 0;
	}
	bool is_go = false;
	c[0] = a[0] ^ b[0];
	if (a[0] & 1 && !c[0])
	{
		is_go = true;
	}
	for (int i = 1; i < n; i++)
	{
		c[i] = a[i] ^ b[i];
		if (is_go)
		{
			c[i] = !c[i];
			if (c[i])
			{
				is_go = false;
			}
			else
			{
				is_go = true;
			}
		}
		else
		{
			if (a[i] & 1 && !c[i])
			{
				is_go = true;
			}
			else
			{
				is_go = false;
			}
		}
	}
	if (is_go)
	{
		c[n] = 1;
	}
	return c;
}