cmake_minimum_required(VERSION 2.8)

project(VectorClass)

set(VectorClass_src Test.cpp Source.cpp CComplexNumber.cpp CComplexVector.cpp)
set(VectorClass_hdr CComplexNumber.hpp CComplexVector.hpp Header.hpp)

add_executable(${PROJECT_NAME} ${VectorClass_src} ${VectorClass_hdr})