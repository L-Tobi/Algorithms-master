#include<vector>

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