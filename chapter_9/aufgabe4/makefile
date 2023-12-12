main.exe: abc.o xyz.o main.cpp  
	g++ main.cpp abc.o xyz.o -o main.exe
abc.o: abc.cpp
	g++ -c abc.cpp 
xyz.o: xyz.cpp
	g++ -c xyz.cpp
clean:
	del *.o *.exe