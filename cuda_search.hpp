#ifndef CUDA_SEARCH_HPP
#define CUDA_SEARCH_HPP
#include<thrust\copy.h>
#include "cuda.hpp"
namespace tobi {namespace cuda {namespace search {

	template<class T>
	int search(const std::vector<T> vector, int& count);
		
}
}
}


#endif // !CUDA_SEARCH_HPP
