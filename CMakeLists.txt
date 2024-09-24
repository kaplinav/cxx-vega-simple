#cmake_minimum_required(VERSION 3.28)
cmake_minimum_required(VERSION 3.22)

project(cxx_vega_simple)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(cxx_vega_simple main.cpp src/my_sum.cpp)

include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG v1.15.2
)
FetchContent_MakeAvailable(googletest)

enable_testing()
add_executable(cxx_vega_tests test_sum.cpp src/my_sum.cpp)
target_link_libraries(cxx_vega_tests gtest_main)

include(GoogleTest)
gtest_discover_tests(cxx_vega_tests)