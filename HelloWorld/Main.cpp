#include <iostream>

// #include is a preprocessor statement.
//main function is the entry point of the application. So that the code gets executed line by line
void Log(const char* message);

int main()
{
	Log("Hello World!");
	std::cin.get();
}