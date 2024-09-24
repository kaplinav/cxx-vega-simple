
#include <benchmark/benchmark.h>
#include "my_sum.h"

static void BM_MySumFunction(benchmark::State& state) {
    for (auto _ : state)
        my_sum(10, 10);
}
// Register the function as a benchmark
BENCHMARK(BM_MySumFunction);

BENCHMARK_MAIN();