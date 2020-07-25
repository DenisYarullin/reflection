#include "reflection.h"
#include "reflection_xml.h"

#include <boost/fusion/container/vector.hpp>
#include <boost/fusion/sequence.hpp>
#include <boost/fusion/include/sequence.hpp>

using namespace boost::fusion;

int main()
{
	Person p("Programmer", 25, std::string("Hello world!"));
	print_fields(p);

	vector<int, char, std::string> stuff(1, 'x', "howdy");
	int i = at_c<0>(stuff);
	char ch = at_c<1>(stuff);
	std::string s = at_c<2>(stuff);

	for_each(stuff, print_xml());

	Foo foo{ 1, "Hello" };
	for_each(foo, print_xml());

	return 0;
}