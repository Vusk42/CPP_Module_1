#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

static std::string	replaceAll( const std::string& line,
								const std::string& s1, const std::string& s2 )
{
	if ( s1.empty() )
		return line;

	std::string	result;
	size_t		pos = 0;
	size_t		found;

	while ( ( found = line.find( s1, pos ) ) != std::string::npos )
	{
		result += line.substr( pos, found - pos );
		result += s2;
		pos = found + s1.length();
	}
	result += line.substr( pos );
	return result;
}

int	main( int argc, char** argv )
{
	if ( argc != 4 )
	{
		std::cerr << "Usage: " << argv[0]
				  << " <filename> <s1> <s2>" << std::endl;
		return 1;
	}

	std::string	filename = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	if ( filename.empty() )
	{
		std::cerr << "Error: filename is empty" << std::endl;
		return 1;
	}

	std::ifstream	inFile( filename.c_str() );
	if ( !inFile.is_open() )
	{
		std::cerr << "Error: cannot open file '" << filename << "'"
				  << std::endl;
		return 1;
	}

	std::string		outName = filename + ".replace";
	std::ofstream	outFile( outName.c_str() );
	if ( !outFile.is_open() )
	{
		std::cerr << "Error: cannot create file '" << outName << "'"
				  << std::endl;
		inFile.close();
		return 1;
	}

	std::stringstream	buffer;
	buffer << inFile.rdbuf();
	std::string	content = buffer.str();

	outFile << replaceAll( content, s1, s2 );

	inFile.close();
	outFile.close();
	return 0;
}
