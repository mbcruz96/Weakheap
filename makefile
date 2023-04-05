heap: driver.o Weakheap.o
	g++ -std=c++11 driver.o Weakheap.o -o heap
driver.o: driver.cpp Weakheap.h
	g++ -std=c++11 -c driver.cpp
Weakheap.o: Weakheap.cpp Weakheap.h
	g++ -std=c++11 -c Weakheap.cpp
	
clean:
	rm *.o
