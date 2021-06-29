CXX=g++
CXXFLAGS=-Wall -I.
OBJS=lista.o lista-stos.o

cel: lista.o lista-stos.o
	$(CXX) $(CXXFLAGS) $(OBJS) -o lista-stos.exe

.PHONY: clean

clean:
	rm -f *.o *.exe *~ core *~
