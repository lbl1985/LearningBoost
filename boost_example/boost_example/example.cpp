#include <boost/lambda/lambda.hpp>
#include <iostream>
#include <iterator>
#include <algorithm>
#include "add.h"
#include "mathOwn.h"

int main()
{
	using namespace boost::lambda;
	//using namespace boost::lambda;
	typedef std::istream_iterator<int> in;
	mathOwn ma;
	 std::for_each(
        in(std::cin), in(), std::cout << (_1 * 3) << " " );
	 std::cout << add(3, 5) << std::endl;
	 std::cout << "8 - 5 = " << ma.del(8, 5);
	return 0;
}