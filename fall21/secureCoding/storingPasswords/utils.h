#include <iostream>
#include <unordered_map>

void showDatabase(std::unordered_map<std::string, std::string> db) {
	printf("%-15s %s\n\n", "username", "password");
	for(auto pair : db) {
		printf("%-15s %s\n", pair.first.c_str(), pair.second.c_str());
	}
	std::cout << std::endl;
}

void showDatabase(std::unordered_map<std::string, std::pair<std::string, std::string>> db) {
	printf("%-15s %-64s %-10s\n\n", "username", "password", "salt");
	for(auto pair : db) {
		printf("%-15s %-64s %-10s\n", pair.first.c_str(), pair.second.first.c_str(), pair.second.second.c_str());
	}
	std::cout << std::endl;
}
