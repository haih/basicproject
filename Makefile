test:test.o
	g++ test.o -o $@ -lglog -lpthread
test.o:test.cpp
	g++ test.cpp -c -o $@

clean:
	rm -rf *.o 
