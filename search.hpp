#ifndef TOBI_SEARCH_HPP
#define TOBI_SEARCH_HPP
#include <array>
#include <vector>
//
//template<typename T, int array_count>
//int BinarySearch(const std::array<T, array_count> data,const T element, int start, int end)
//{
//	const int _mid = (end + start) >> 1;
//	if (data[_mid] == element)
//		return _mid;
//	int res = -1;
//	if (end - start == 1)
//	{
//		return res;
//	}
//	if (element < data[_mid])
//	{
//		res = BinarySearch<T, array_count>(data, element,start,_mid);
//	}
//	else
//	{
//		res = BinarySearch<T, array_count>(data, element,_mid, end);
//	}
//	return res;
//}

template<class Iterator, class T> inline
int BinarySearch(Iterator first, Iterator last, const T& value)
{
	if (std::distance(first, last) < 100)
	{
		std::lower_bound(first, last, value);
	}
	else
	{
		//cuda version
	}
}

template<class Iterator, class T> inline
Iterator LinearSearch(Iterator first, Iterator last, const T& value)
{
	if (std::distance(first,last) < 100)
	{
		std::find(first, last, value);
	}
	else
	{
		//cuda version
	}
	
}

#endif // !TOBI_SEARCH_HPP
