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

void Stream::IntStream::function(std::function<int(int)> f) noexcept {
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
int Stream::IntStream::sum() noexcept {
	int acc = 0;
	for (auto i = left; i != right; ++i)
	{
		acc += *i;
	}
	return acc;
};
int Stream::IntStream::reduce(std::function<int(int, int)> f) {
	for (auto i = left; i + 1 != right; ++i)
	{
		*(i + 1) = f(*(i), *(i + 1));
	}
	return *(right - 1);
};
Stream::IntStream Stream::IntStream::iterator(std::function<int(int)> f, int initialize, int num) {
	std::vector<int> vec;
	for (size_t i = 0; i < num; i++)
	{
		vec.push_back(initialize);
		initialize = f(initialize);
	}
	IntStream s;
	s.set(vec);
	return s;
};