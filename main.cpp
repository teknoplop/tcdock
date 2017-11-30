#include <iostream>

#include <boost/date_time.hpp>

int main( int argc, char** argv )
{
	std::cout << "Hello at"
		<< boost::posix_time::to_iso_string(boost::posix_time::second_clock::local_time())
		<< std::endl;

	return 0;
}
