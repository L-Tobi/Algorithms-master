#include "insertion_sort.hpp"
#include <iostream>

int main(int argc, char** argv)
{
	std::vector<int> src{ 5,2,4,6,1,3,7,9,7,8 };
	InsertionSort<int>(src);
	for (int i = 0; i < src.size(); i++)
	{
		printf("%d\n", src[i]);
	}
	return 0;
}