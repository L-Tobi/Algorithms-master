#include <bitset>
#include <iostream>
template<int n = 10>
std::bitset<n+1> BinaryAdd(std::bitset<n> a, std::bitset<n> b)
{
	if (a.count() == 0 && b.count() == 0 )
	{
		return 0;
	}
	std::bitset<n + 1> c;
	bool is_carry = false;

	for (int i = 0; i < n; i++)
	{
		c[i] = a[i] ^ b[i];
		if (is_carry)
		{
			c[i] = !c[i];
			if (!a[i] && !b[i])
				is_carry = false;
			else
				is_carry = true;
		}
		else
		{
			if ((a[i] & 1 || b[i] & 1) && !c[i])
				is_carry = true;
			else
				is_carry = false;
		}
	}
	if (is_carry)
		c[n] = 1;

	return c;
}