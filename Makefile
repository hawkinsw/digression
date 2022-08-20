all:
	g++ -O3 -g -o digression-1alloc -L/usr/lib/x86_64-linux-gnu/ digression-1alloc.cpp -lbenchmark
	g++ -O3 -g -o digression-2allocs -L/usr/lib/x86_64-linux-gnu/ digression-2allocs.cpp -lbenchmark

clean:
	rm -rf digression-1alloc digression-2allocs
