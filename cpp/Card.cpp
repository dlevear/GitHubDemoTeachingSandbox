#include "Card.hpp"

#include <string>
using std::string, std::to_string;

Card::Card(int number, char suit) {
	its_number = number;
	its_suit = suit;
}
string Card::as_string() {
	string ret = "";
	ret += to_string(its_number);
	ret += its_suit;
	return ret;
}
