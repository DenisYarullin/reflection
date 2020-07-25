#pragma once

#include <iostream>
#include <boost/fusion/adapted/struct/adapt_struct.hpp>

struct print_xml {
	template <typename T>
	void operator()(T const& x) const {
		std::cout
			<< '<' << typeid(x).name() << '>'
			<< x
			<< "</" << typeid(x).name() << '>'
			<< std::endl;
	}
};

struct Foo { 
	int bar; 
	char const* buzz; 
};

BOOST_FUSION_ADAPT_STRUCT(
	Foo,
	(int, bar)
	(char const*, buzz)
)
