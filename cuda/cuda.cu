#include "../cuda.hpp"
namespace tobi {namespace cuda {
	bool IsSupportCuda()
	{
		cudaError _status = cudaSetDevice(0);
		if (_status != cudaSuccess)
			return false;
		return true;
	}

}
}