#ifndef ALGORITHM_SUBJECT_HPP
#define ALGORITHM_SUBJECT_HPP
#include <vector>
#include <limits.h>
/*
	test data :
	{2, 3, -4, 5, -2, -3, 8, -1, -3, 1, 0, -5, 1, 4, -2, 6, 2, 1, -3, -5, -2, 0, -1, 0, 3, 2, 3, 4, 5, -2, -3};
	count :
	31
*/

void FindMaximumSubarray_Recursion(const std::vector<int> src, int& low, int& high, int& sum)
{
	enum RESULT
	{
		LOW_INDEX = 0,
		HIGH_INDEX = 1,
		RESULT_SUM = 2,
	};
	if (low == high)
	{
		sum = src[low];
		return;
	}
	int _mid = (low + high) >> 1;
	int _left_res[3] = { low, _mid, INT_MIN };
	int _right_res[3] = { _mid + 1, high, INT_MIN };
	//int _right_high = high;
	
	//high = _mid;
	//sum = INT_MIN;
	FindMaximumSubarray_Recursion(src, _left_res[LOW_INDEX], _left_res[HIGH_INDEX], _left_res[RESULT_SUM]);
	//_left_res[LOW_INDEX] = low;
	//_left_res[HIGH_INDEX] = high;
	//_left_res[RESULT_SUM] = sum;
	/*low = _mid + 1;
	high = _right_high;
	sum = INT_MIN;*/
	FindMaximumSubarray_Recursion(src, _right_res[LOW_INDEX], _right_res[HIGH_INDEX], _right_res[RESULT_SUM]);
	//_right_res[LOW_INDEX] = low;
	//_right_res[HIGH_INDEX] = high;
	//_right_res[RESULT_SUM] = sum;

	{
		int _left_sum = INT_MIN;
		int _low_index = -1;
		int _right_sum = INT_MIN;
		int _high_index = -1;

		for (int i = _mid; i >= _left_res[LOW_INDEX]; i--)
		{
			static int _mid = 0;
			_mid += src[i];
			if (_mid > _left_sum)
			{
				_left_sum = _mid;
				_low_index = i;
			}
		}

		for (int j = _mid + 1; j <= _right_res[HIGH_INDEX]; j++)
		{
			static int _mid = 0;
			_mid += src[j];
			if (_mid > _right_sum)
			{
				_right_sum = _mid;
				_high_index = j;
			}
		}

		sum = _left_sum + _right_sum;

		if (sum >= _left_res[RESULT_SUM] && sum >= _right_res[RESULT_SUM])
		{
			low = _low_index;
			high= _high_index;
		}
		else if(_left_res[RESULT_SUM] >= sum && _left_res[RESULT_SUM] >= _right_res[RESULT_SUM])
		{
			low = _left_res[LOW_INDEX];
			high = _left_res[HIGH_INDEX];
			sum = _left_res[RESULT_SUM];
		}
		else
		{
			low = _right_res[LOW_INDEX];
			high = _right_res[HIGH_INDEX];
			sum = _right_res[RESULT_SUM];
		}
	}
}

#endif // !ALGORITHM_SUBJECT_HPP
