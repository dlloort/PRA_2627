all: app1 app2
helloPRA.o: helloPRA.cpp helloPRA.h
	g++ -c helloPRA.cpp
app1.o: app1.cpp helloPRA.h
	g++ -c app1.cpp
app2.o: app2.cpp helloPRA.h
	g++ -c app2.cpp
app1: app1.o helloPRA.o
	g++ -o app1 app1.o helloPRA.o
app2: app2.o helloPRA.o
	g++ -o app2 app2.o helloPRA.o
clean:
	rm -f *.o app1 app2
test: all
	./app1
	./app2
