#include "sort.hpp"
#include "linear_find.hpp"
#include "math_algorithms.hpp"
#include <iostream>
#include <time.h>
#include <algorithm>
#include "tobi_tools.hpp"
int main(int argc, char** argv)
{

	srand((unsigned)time(0));

	std::vector<int> src;
//	std::vector<int> src{ 3,41,52,26,38,57,9,49 };
	
	for (int i = 0; i < 10000; i++)src.push_back(i);


	std::random_shuffle(src.begin(), src.end());
//	tobi::WriteDataToTxt<int>("./data/out.txt", src);
	tobi::Timer<std::chrono::milliseconds> begin;
	MergeSort<int>(src);
	printf(" pass time : %d\n", begin.elaplsed());
	
//	ChooseSort<int>(src);
	tobi::PrintVector<int>(src);

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
