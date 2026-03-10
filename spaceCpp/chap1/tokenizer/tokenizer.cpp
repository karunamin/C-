
#include "tokenizer.h"

Tokenizer::Tokenizer(const string& target, const string& delimiters)
	:target(target), delimiters(delimiters)
{
	this->begin = target.find_first_not_of(delimiters, 0);
	this->end = target.find_first_of(delimiters, begin);
}
Tokenizer::~Tokenizer()
{
}

bool Tokenizer::hasNextToken()
{
	return this->begin != string::npos;
}
string Tokenizer::nextToken()
{
	string token = this->target.substr(this->begin, this->end - this->begin);
	this->begin = this->target.find_first_not_of(this->delimiters, this->end);
	this->end = this->target.find_first_of(this->delimiters, this->begin);
	return token;
}