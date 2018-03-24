#ifndef TOBI_SEARCH_HPP
#define TOBI_SEARCH_HPP
#include <array>
#include <vector>

template<typename T, int array_count>
int BinarySearch(const std::array<T, array_count> data,const T element, int start, int end)
{
	const int _mid = (end + start) >> 1;
	if (data[_mid] == element)
		return _mid;
	int res = -1;
	if (end - start == 1)
	{
		return res;
	}
	if (element < data[_mid])
	{
		res = BinarySearch<T, array_count>(data, element,start,_mid);
	}
	else
	{
		res = BinarySearch<T, array_count>(data, element,_mid, end);
	}
	return res;
}

template<typename T>
int LinearSearch(std::vector<T> src, T dst)
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

#endif // !TOBI_SEARCH_HPP
