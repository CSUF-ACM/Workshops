#include <iostream>
#include "utils.h"
#include <unordered_map>

using namespace std;

void insertIntoDB(unordered_map<string, string>& db, string username, string password) {
	db.emplace(username, password);
}

int main() {
	unordered_map<string, string> db;

	insertIntoDB(db, "Alice3038", "LoveCoding57");
	insertIntoDB(db, "Foxtrot_w", "Ramirez321");
	insertIntoDB(db, "CSanchez0798", "Sanchez1234");
	insertIntoDB(db, "BigPumpkin30", "Password123");
	insertIntoDB(db, "KyleDunker", "Password123");
	showDatabase(db);
}


