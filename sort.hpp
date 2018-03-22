#include<vector>

//Time Complex: N2
template<class T>
int ChooseSort(std::vector<T>& sort)
{
	if (sort.empty())
	{
		return 0;
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
	return 1;
}

//Time Complex: N2
template<class T, bool sort_type_up = true>
int InsertionSort(std::vector<T>& sort)
{
	if (sort.empty())
	{
		return 0;
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
}