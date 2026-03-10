#include "tokenizer.h"
int main() {

	string str = "Passion is genesis of genius - Galileo Gllilei";
	string delimiters = " \n";
	Tokenizer tokenizer(str, delimiters);

	while (tokenizer.hasNextToken())
	{
		cout << tokenizer.nextToken() << endl;
	}
	return 0;
}