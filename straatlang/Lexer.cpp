#include "Lexer.hpp"

Straatlang::Lexer::Lexer (const Source &source)
	: source (source) 
{

	this->source = *source;

};