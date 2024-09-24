#cmake_minimum_required(VERSION 3.28)
cmake_minimum_required(VERSION 3.22)

project(cxx_vega_simple)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(cxx_vega_simple main.cpp src/my_sum.cpp)

include(FetchContent)
set(BENCHMARK_ENABLE_TESTING off) # to suppress benchmark internal tests
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG v1.15.2
)
FetchContent_Declare(
        googlebenchmark
        GIT_REPOSITORY https://github.com/google/benchmark.git
        GIT_TAG main) # need main for benchmark::benchmark
FetchContent_MakeAvailable(
        googletest
        googlebenchmark)

enable_testing()
add_executable(cxx_vega_tests test_sum.cpp src/my_sum.cpp)
target_link_libraries(cxx_vega_tests gtest_main)

include(GoogleTest)
gtest_discover_tests(cxx_vega_tests)

add_executable(cxx_vega_bm bm_sum.cpp src/my_sum.cpp)
target_link_libraries(cxx_vega_bm benchmark::benchmark)



