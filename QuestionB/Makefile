all: Clock.o main.cpp
	g++ -o main main.cpp Clock.o

Clock.o:
	g++ -c Clock.cpp -o Clock.o

clean:
	rm *.o main
