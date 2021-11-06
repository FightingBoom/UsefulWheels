main: ModuleTest.o CppWheels_Other.o CppWheels_String.o
	g++ -o ModuleTest ModuleTest.o CppWheels_Other.o CppWheels_String.o
	rm *.o

ModuleTest.o: ModuleTest.cpp
	g++ -c ModuleTest.cpp

CppWheels_Other.o: CppWheels_Other.cpp
	g++ -c CppWheels_Other.cpp

CppWheels_String.o: CppWheels_String.cpp
	g++ -c CppWheels_String.cpp

clean:
	rm ModuleTest
