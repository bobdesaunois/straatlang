#ifndef LEXER_HPP
#define LEXER_HPP

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
