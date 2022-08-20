#include <string>
#include <benchmark/benchmark.h>

int main() {
				std::string str{"This is a really, really, really, really, really, really, really, really, really, really, really, really, really, really boring string."};
				const char *chr = "This is a really, really, really, really, really, really, really, really, really, really, really, really, really, really boring other string.";

				// g++ does not inline the "basic" implementation
				// which means that there is an alloc to construct the
				// copy of str and an alloc during the append of the chr.
				std::string result = str + chr;

				benchmark::DoNotOptimize(result);
				return 0;
}
