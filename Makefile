normal: main.o my_class_fileIO.o
	g++ -o normal main.o my_class_fileIO.o
main.o:	main_header.h main.cpp
	g++ -c main.cpp
my_class_fileIO.o: main_header.h my_class_fileIO.cpp
	g++ -c my_class_fileIO.cpp

all: normal

clean:
	rm -f *.o normal