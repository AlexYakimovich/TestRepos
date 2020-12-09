#include <iostream>
#include <string>
#include <chrono>

using namespace std;

int superFunc() {
	static int i = 0;
	i+= 1;
	i++;
	return i;
}

void greet() {
	string name;
	cin >> name;
	cout << "Hello there, " << name << endl;
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
