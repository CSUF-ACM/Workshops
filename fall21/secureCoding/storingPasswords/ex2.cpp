#include <iostream>
#include "picosha2.h"
#include "utils.h"
#include <unordered_map>

using namespace std;

string hash_pass(string src) {
	return picosha2::hash256_hex_string(src);
}

void insertIntoDB(unordered_map<string, string>& db, string username, string password) {
	db.emplace(username, hash_pass(password));
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


