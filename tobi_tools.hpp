#ifndef TOBI_TOOL_HPP
#define TOBI_TOOL_HPP

#include <chrono>
#include <fstream>
#include <iostream>
#include <ctime>
#include <algorithm>

namespace tobi {

	typedef unsigned int uint;
	typedef unsigned char uchar;


	template<typename T, int size>
	void RandomShuffle(T& array)
	{
		if (array.size() < size)
			array.resize(size);
		for (int i = 0; i < size; i++)
		{
			array[i] = i;
		}
		std::random_shuffle(array.begin(), array.end());
	}

	template<class T = std::vector<int>, bool feed = true>
	void PrintVector(const T vector)
	{
		if (feed)
		{
			for (int i = 0; i < vector.size(); i++)
				printf("%d\n", vector[i]);
		}
		else
		{
			for (int i = 0; i < vector.size(); i++)
				printf("%d ", vector[i]);
		}
	}

	template<class T>
	void WriteDataToTxt(std::string path, const std::vector<T> data)
	{
		std::ofstream _out(path);
		if (_out.is_open())
		{
			for (int i = 0; i < data.size(); i++)
			{
				_out << data[i];
				_out << " ";
			}
		}
	}

	template <class T>
	class Timer
	{
	public:
		Timer() :begin_time(std::chrono::high_resolution_clock::now()) {}
		int64_t elaplsed() const
		{
			return std::chrono::duration_cast<T>(std::chrono::high_resolution_clock::now() - begin_time).count();
		}
	private:
		std::chrono::time_point<std::chrono::high_resolution_clock> begin_time;
	};
}

#endif // !TOBI_TOOL_HPP
