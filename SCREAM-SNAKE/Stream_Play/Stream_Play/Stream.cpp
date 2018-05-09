#include"stdafx.h"
#include"Stream.h"
#include<iostream>
void Stream::IntStream::print() noexcept{
	for (auto i = left; i + 1 != right; ++i)
	{
		std::cout << *i << ", ";
	}
	std::cout << *(right - 1) << std::endl;
};

void Stream::IntStream::function(std::function<int(int)> f) {
	for (auto i = left; i != right; ++i)
	{
		*i = f(*i);
	}
};
void Stream::IntStream::set(std::vector<int> v) {
	vector_ = v;
	left = vector_.begin();
	right = vector_.end();
}
