# the compiler: gcc for C program, define as g++ for C++
CXX=g++

TARGET=app
OBJECTS=main.o vendors.o VendorCommands.o RemoteControl.o
DEPS=vendors.hpp VendorCommands.hpp Command.hpp RemoteControl.hpp
#OBJECTS=main.o vendors.o RemoteControl.o VendorCommands.o
#DEPS=OutdoorLight.hpp Command.hpp VendorCommands.hpp RemoteControl.hpp Command.hpp

# compiler flags:
#  -g     - this flag adds debugging information to the executable file
#  -Wall  - this flag is used to turn on most compiler warnings
CFLAGS= -g -Wall
 
# Makefile build rule format..
# target: dependencies
# 	action

all: $(TARGET)

# GOAL: Recompiles and links the target any time there's a change in the dependencies
#
# What is $@?
# 	Copy the LEFT side of the rule (%.o)
#
# What is $^? 
# 	Ref: https://www.gnu.org/software/make/manual/html_node/Automatic-Variables.html
# 	Copy the RIGHT side of the rule (%.cpp)
$(TARGET): $(OBJECTS)
	$(CXX) $(CFLAGS) -o $@.out $^

# GOAL: This rule will run once each time there is a dependency on an *.o file in the $(TARGET) rule above.
#
# If you want to build any_text.o, then it depends on any_text.cpp
#
# -c flag means that we will not get an executable from this, only a new .o file.
#
# What is $<?
# 	First entry of the right side of the rule (%.cpp)
%.o: %.cpp $(DEPS)
	$(CXX) $(CFLAGS) -c -o $@ $<
 
clean:
	rm *.out *.o