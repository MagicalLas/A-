#pragma once
#include<vector>
#include<functional>
#include"Wrapper.h"
namespace Stream {
	class IntStream {
	private:
		std::vector<int>::iterator left, right;
		std::vector<int> vector_;
	public:
		void set(std::vector<int> v);
		void set_iterator(std::vector<int>::iterator left_, std::vector<int>::iterator right_);
		void function(std::function<int(int)> f)noexcept;
		void print()noexcept;
		int sum() noexcept;
		int reduce(std::function<int(int, int)> f);
		IntStream iterator(std::function<int(int)> f, int initialize, int num);
		IntStream map(Stream_::Wrapper<int>(*las)(Stream_::Wrapper<int> v)) noexcept;
	};
}