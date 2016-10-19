DEBUG = -g

COMPC = gcc
STDC99=-std = -std=c99
CFLAGS = -Wall $(DEBUG)

COMP = g++
STD98 = -std=c++98
STD11 = -std=c++11
FLAGS = -Wall $(DEBUG)

all:
	hello overload summing
hello:
	$(COMP) hello_world.cpp -o hello

#overload operators example
overload:
	$(COMP) $(STD11) supp_overloading.cpp -o SOverload
	
#templates example
summing:
	$(COMP) $(STD11) summing.cpp -o Summing	


clean_all: 
	rm hello overload summing
	
#Si se generan los objetos	
#rm *o hello
	
	