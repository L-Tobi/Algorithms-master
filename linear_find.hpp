#include<vector>

template<typename T>
int LinearFind(std::vector<T> src, T dst)
{
	for (int i = 0; i < src.size(); i++)
	{
		if (src[i] == dst)
		{
			return i;
		}
	}
	return -1;
}