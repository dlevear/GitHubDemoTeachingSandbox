#ifndef CARD_HPP
#define CARD_HPP

#include <string>
using std::string;

class Card {
	private:
	int its_number;
	char its_suit;

	public:
	Card(int, char);
	string as_string();
};

#endif
