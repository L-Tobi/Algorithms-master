#include "sort.hpp"
#include "search.hpp"
#include "math_algorithms.hpp"
#include "algorithm_subject.hpp"
#include <iostream>
#include <time.h>
#include <array>
#include <algorithm>
#include "tobi_tools.hpp"
int main(int argc, char** argv)
{
	srand((unsigned)time(0));

//	std::vector<int> src;
	std::vector<int> src{ 2, 3, -4, 5, -2, -3, 8, -1, -3, 1, 0, -5, 1, 4, -2, 6, 2, 1, -3, -5, -2, 0, -1, 0, 3, 2, 3, 4, 5, -2, -3 };
	
	//int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//std::array<int, 100> _search;
	//for (int i = 0; i < 100; i++)
	//{
	//	if (i == 90)
	//	{
	//		continue;
	//	}
	//	_search[i] = i;
	//}
	//std::random_shuffle(_search.begin(), _search.end());
	//for (int i = 0; i < _search.size(); i++)
	//	printf("%d\n", _search[i]);
//	printf("BS : %d\n", BinarySearch<int, 100>(_search, 200, 0, 100));
	int low = 0;
	int high = src.size();
	int sum = 0;
	FindMaximumSubarray_Recursion(src, low, high, sum);
	printf("low : %d  high : %d  sum : %d\n", low, high, sum);
	//std::vector<int> aaa;
	//tobi::RandomShuffle<std::vector<int>, 200>(aaa);
	//tobi::PrintVector(aaa);
	
//	for (int i = 0; i < 10000; i++)src.push_back(i);
//
//
//	std::random_shuffle(src.begin(), src.end());
////	tobi::WriteDataToTxt<int>("./data/out.txt", src);
//	tobi::Timer<std::chrono::milliseconds> begin;
//	MergeSort<int>(src);
//	printf(" pass time : %d\n", begin.elaplsed());
//
//	tobi::Timer<std::chrono::milliseconds> _begin;
//	std::sort(src.begin(), src.end());
//	printf("c++ pass time : %d\n", _begin.elaplsed());
////	ChooseSort<int>(src);
//	tobi::PrintVector<int>(src);

	//const int n = 10;	
	//std::bitset<n> a("1001010101");
	//std::bitset<n> b("1011011111");
	//std::cout << BinaryAdd(a, b) << std::endl;

/*
	std::vector<int> src{ 31, 41,59,26,41,58 };
	printf("%d\n", LinearSearch<int>(src, 60));
*/

	/*InsertionSort<int,false>(src);
	for (int i = 0; i < src.size(); i++)
	{
		printf("%d\n", src[i]);
	}*/
	return 0;
}
