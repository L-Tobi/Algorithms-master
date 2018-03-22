#include "sort.hpp"
#include "linear_find.hpp"
#include "math_algorithms.hpp"
#include <iostream>


int main(int argc, char** argv)
{

	std::vector<int> src{ 31, 41,59,26,41,58,20,100,2 };
	ChooseSort<int>(src);
	for (int i = 0; i < src.size(); i++)
	{
		printf("%d\n", src[i]);
	}

	//const int n = 10;	
	//std::bitset<n> a("1001010101");
	//std::bitset<n> b("1011011111");
	//std::cout << BinaryAdd(a, b) << std::endl;

/*
	std::vector<int> src{ 31, 41,59,26,41,58 };
	printf("%d\n", LinearFind<int>(src, 60));
*/

	/*InsertionSort<int,false>(src);
	for (int i = 0; i < src.size(); i++)
	{
		printf("%d\n", src[i]);
	}*/
	return 0;
}
