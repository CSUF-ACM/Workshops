#include <iostream>
#include "picosha2.h"
#include "utils.h"
#include <unordered_map>


using namespace std;

string generate_salt() {
	return to_string(rand());
}

string hash_pass(string src, string salt) {
	return picosha2::hash256_hex_string(src + salt);
}

void insertIntoDB(unordered_map<string, pair<string, string>>& db, string username, string password) {
	string salt = generate_salt();
	db.emplace(username, make_pair(hash_pass(password, salt), salt));
}

int main() {
	unordered_map<string, pair<string, string>> db;

	insertIntoDB(db, "Alice3038", "LoveCoding57");
	insertIntoDB(db, "Foxtrot_w", "Ramirez321");
	insertIntoDB(db, "CSanchez0798", "Sanchez1234");
	insertIntoDB(db, "BigPumpkin30", "Password123");
	insertIntoDB(db, "KyleDunker", "Password123");
	showDatabase(db);
}


