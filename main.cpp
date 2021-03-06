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
	int a = 0;
	std::cout << ++a << a;
	return 0;
//	std::vector<int> src{ 2, 3, -4, 5, -2, -3, 8, -1, -3, 1, 0, -5, 1, 4, -2, 6, 2, 1, -3, -5, -2, 0, -1, 0, 3, 2, 3, 4, 5, -2, -3 };
//	std::vector<int> src{ 2, 3, -4, 5, -2, -3, -8, 90, -3, 1, 0, -5, 1, 4, -2, 6, 2, 1, -3, -5, -2, 0, -1, 0, 3, 2, 3, -4, 5, -2, -3 };
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
	//int low = 0;
	//int high = src.size()-1;
	//int sum = 0;
	//FindMaximumSubarray_Recursion(src, low, high, sum);
	//printf("low : %d  high : %d  sum : %d\n", low, high, sum);
	//std::vector<int> aaa;
	//tobi::RandomShuffle<std::vector<int>, 200>(aaa);
	//tobi::PrintVector(aaa);
	std::vector<int> src;
//	std::array<int, 10> src{ 5,3,17,10,84,19,6,22,9,100 };
	std::array<int, 200000> newsrc;
//	std::array<int, 12> src{ 13,19,9,5,12,8,7,4,21,2,6,11 };

	//tobi::tools::RandomShuffle<std::array<int, 200000>, 200000>(newsrc);
	tobi::tools::RandomShuffle(newsrc.begin(), newsrc.end(), 0);
	tobi::tools::PrintVector(newsrc.begin(), newsrc.end());

	for (int i = 0; i < 200000; i++)src.push_back(newsrc[i]);
	tobi::tools::Timer<std::chrono::microseconds> _begin;
	//HeapSort<int,100000>(newsrc);
	tobi::algorithm::sort::QuickSort<int, 200000>(newsrc);
	printf("my qucik pass time : %d\n", _begin.elaplsed());
	//for (int i = 0; i < newsrc.size(); i++)
	//{
	//	printf("%d \n", newsrc[i]);
	//}
//
//
//	std::random_shuffle(src.begin(), src.end());
////	tobi::WriteDataToTxt<int>("./data/out.txt", src);
	tobi::tools::Timer<std::chrono::microseconds> begin;
//	MergeSort<int>(src);
	std::sort(src.begin(), src.end());
	printf("c++ pass time : %d\n", begin.elaplsed());
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
