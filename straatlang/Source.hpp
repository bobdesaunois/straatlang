#ifndef SOURCE_HPP
#define SOURCE_HPP

#include <string>

namespace Straatlang
{

	class Source
	{

	private:

		std::string filename;

	public:

		Source ();
		void setFilename (std::string filename);

	};

}

#endif