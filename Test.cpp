#include <iostream>
#include <string>
#include <chrono>

using namespace std;

void greet(){
	cout << "Hello there" << endl;
}

int main(){
	// This is my program
	// branch changes
	// This is newest comment
	cout << "Added changes" << endl;
	std::string name;
	std::cin >> name;
	std::cout << "Hello world, Here I am: " << name << std::endl;
	return 0;
}
