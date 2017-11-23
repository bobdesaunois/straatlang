#ifndef LEXER_H
#define LEXER_H

#include "Source.hpp"

namespace Straatlang
{

	class Lexer
	{

	private:

		const Source &source;

	public:

		Lexer (const Source &source);

	};

}


#endif