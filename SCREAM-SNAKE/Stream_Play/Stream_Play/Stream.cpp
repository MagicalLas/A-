#include"stdafx.h"
#include"Stream.h"
#include<iostream>
[[noreturn]]void Stream::IntStream::print() noexcept{
	for (auto i = left; i + 1 != right; ++i)
	{
		std::cout << *i << ", ";
	}
	std::cout << *(right - 1) << std::endl;
};

[[noreturn]]void Stream::IntStream::function(std::function<int(int)> f) noexcept {
	for (auto i = left; i != right; ++i)
	{
		*i = f(*i);
	}
};
[[noreturn]]void Stream::IntStream::set(std::vector<int> v) {
	vector_ = v;
	left = vector_.begin();
	right = vector_.end();	
}
[[nodiscard]]int Stream::IntStream::sum() noexcept {
	int acc = 0;
	for (auto i = left; i != right; ++i)
	{
		acc += *i;
	}
	return acc;
};
Stream::IntStream Stream::IntStream::iterator(std::function<int(int)> f, int initialize, int num) {
	std::vector<int> vec;
	for (int i = 0; i < num; i++)
	{
		vec.push_back(initialize);
		initialize = f(initialize);
	}
	this->set(vec);
	return *this;
};
Stream::IntStream Stream::IntStream::map (Stream_::Wrapper<int>(*function)(Stream_::Wrapper<int> v)) noexcept {
	for (auto i = left; i != right; ++i)
	{
		Stream_::Wrapper<int> a = *i;

		*i = function(a).value;
	};
	return *this;
}
	
int Stream::IntStream::reduce(Stream_::Wrapper<int>(*las)(int acc, Stream_::Wrapper<int>v), int origin) noexcept
{
	int result = origin;
	for (auto i = left; i != right; ++i)
	{
		result=las(result, *i).value;
	};
	return result;
}
