#include<vector>

template<class T>
int InsertionSort(std::vector<T>& sort)
{
	if (sort.empty())
	{
		return 0;
	}
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