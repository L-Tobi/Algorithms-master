#include <thrust\device_vector.h>
#include <thrust\random.h>
namespace tobi {namespace cuda {namespace search {
	
	template<class T>
	int search(const std::vector<T> vector, int& count)
	{
		thrust::device_ptr<T> _devicedata;
//		thrust::copy()
	}
	
}
}
}