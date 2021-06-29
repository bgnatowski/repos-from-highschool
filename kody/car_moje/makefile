CXX=g++
CXXFLAGS=-Wall -I.
OBJS=samochod.o car.o

samochod: samochod.o car.o
	$(CXX) $(CSSFLAGS) $(OBJS) -o samochod.exe

.PHONY: clean

clean: 
	rm -f *.o *.exe *~ core *~
