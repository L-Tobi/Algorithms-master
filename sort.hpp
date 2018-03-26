#ifndef TOBI_SORT_HPP
#define TOBI_SORT_HPP


#include<vector>

template<typename T>
int Merge(std::vector<T>& left, std::vector<T>& right, std::vector<T>& result)
{
	std::vector<T> res;
	int j = 0;
	for (int i = 0; i < left.size(); i++)
	{
		if (left[i] <= right[j])
		{
			res.push_back(left[i]);
		}
		else
		{
			res.push_back(right[j]);
			if (j == right.size() - 1)
			{
				for (int m = i; m < left.size(); m++)
				{
					res.push_back(left[m]);
				}
				break;
			}
			j++;
			i--;
		}
		if (i == left.size() - 1)
		{
			for (int n = j; n < right.size(); n++)
			{
				res.push_back(right[n]);
			}
			break;
		}
	}
	result = res;
	return 0;
}

template<typename T>
int MergeSort(std::vector<T>& sort)
{
	int _start = 0;
	int _mid = sort.size() >> 1;
	int _end = sort.size();

	std::vector<T> _left;
	std::vector<T> _right;

	if (_start < _mid)
	{
		for (int i = _start; i < _mid; i++)
		{
			_left.push_back(sort[i]);
		}
		for (int j = _mid; j < _end; j++)
		{
			_right.push_back(sort[j]);
		}
		MergeSort(_left);
		MergeSort(_right);
		Merge<T>(_left, _right, sort);
	}

	return 0;
}



//Time Complexity: N2
template<typename T>
int ChooseSort(std::vector<T>& sort)
{
	if (sort.empty())
	{
		return 1;
	}
	for (int i = 0; i < sort.size() - 1; i++)
	{
		int _min = sort[i];
		int _min_index = i;
		for (int j = i + 1; j < sort.size(); j++)
		{
			if (_min > sort[j])
			{
				_min = sort[j];
				_min_index = j;
			}
		}
		sort[_min_index] = sort[i];
		sort[i] = _min;
	}
	return 0;
}

//Time Complexity: N2
template<typename T, bool sort_type_up = true>
int InsertionSort(std::vector<T>& sort)
{
	if (sort.empty())
	{
		return 1;
	}
	if (sort_type_up)
	{
		for (int i = 1; i < sort.size(); i++)
		{
			T _data = sort[i];
			int j = i - 1;
			while (j >= 0 && sort[j] > _data)
			{
				sort[j + 1] = sort[j];
				j--;
			}
			sort[j + 1] = _data;
		}
	}
	else
	{
		for (int i = 1; i < sort.size(); i++)
		{
			T _data = sort[i];
			int j = i - 1;
			while (j >= 0 && sort[j] < _data)
			{
				sort[j + 1] = sort[j];
				j--;
			}
			sort[j + 1] = _data;
		}
	}
	return 0;
}

#endif // !TOBI_SORT_HPP
