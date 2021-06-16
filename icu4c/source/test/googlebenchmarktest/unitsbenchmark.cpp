#include <benchmark/benchmark.h>

#include "units.h"

static void BM_Units(benchmark::State& state) {
  // Perform setup here
  for (auto _ : state) {
    // This code gets timed
    testUnitsConversion();
    testComplexUnitsConversion();
    testUnitsRouter();
  }
}

// Register the function as a benchmark
BENCHMARK(BM_Units);

// Run the benchmark
BENCHMARK_MAIN();