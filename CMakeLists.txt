cmake_minimum_required(VERSION 3.9)

project(Algorithms)


FILE(GLOB HEADFILES "*.h" "*.hpp")
aux_source_directory(. SOURCEFILES)


add_executable(Algorithms 
				${HEADFILES}
				${SOURCEFILES})