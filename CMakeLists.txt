cmake_minimum_required(VERSION 3.9)
project(Algorithms)


FILE(GLOB HEADFILES "*.h" "*.hpp")

aux_source_directory(. SOURCEFILES)
aux_source_directory("cuda/." CUDAFILES)
enable_language("CUDA")

add_definitions(-DUSE_CUDA)


add_executable(Algorithms 
				${CUDAFILES}
				${HEADFILES}
				${SOURCEFILES})