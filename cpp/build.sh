#!/bin/sh

CXX_FLAGS="-Wall -pedantic"

# Create Card.o, only if it doesn't exist, or if it's old
if [ ! -f "Card.o" ] || [ "Card.hpp" -nt "Card.o" ] || [ "Card.cpp" -nt "Card.o" ]
then
	g++ ${CXX_FLAGS} -c Card.cpp 
else
	echo "Nothing to be done for Card.o"
fi

# Create main.o object file
g++ ${CXX_FLAGS} -c main.cpp 

# Create app
g++ ${CXX_FLAGS} -o app main.o Card.o
