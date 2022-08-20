#include <string>
#include <benchmark/benchmark.h>

int main() {
				std::string str{"This is a really, really, really, really, really, really, really, really, really, really, really, really, really, really boring string."};
				const char *chr = "This is a really, really, really, really, really, really, really, really, really, really, really, really, really, really boring other string.";

				// g++ (properly) inlines the "optimized" implementation
				// which means that there is only a single malloc required.
				std::string result = chr + str;

				benchmark::DoNotOptimize(result);
				return 0;
}
