#ifndef TOBI_TOOL_HPP
#define TOBI_TOOL_HPP

#include <chrono>
#include <fstream>
#include <iostream>
#include <ctime>
#include <algorithm>
#include <numeric>
typedef unsigned int uint;
typedef unsigned char uchar;

namespace tobi {namespace tools {
		//template<typename T, int size>
		template<class Iterator> inline
		void RandomShuffle(Iterator first, Iterator last, int start_num)
		{
			if (first != last)
			{
				std::iota(first, last, start_num);
				std::random_shuffle(first, last);
				return;
			}
			return;
		}

		//template<class T, bool feed = true>
		template<class Iterator> inline
		void PrintVector(Iterator first, Iterator last, bool feed = false)
		{
			if (feed)
			{
				for (; first != last; first++)
				{
					std::cout << *first << " ";
				}
			}
			else
			{
				for (; first != last; first++)
				{
					std::cout << *first << std::endl;
				}
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
}
#endif // !TOBI_TOOL_HPP
