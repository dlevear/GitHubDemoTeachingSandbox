#include <iostream>
#include "Card.hpp"
using std::cout, std::endl;
int main() {
	Card mycard(7,'H');
	cout << mycard.as_string();
	cout << endl;
	return 0;
}
