#pragma once
#include<vector>
#include<functional>
namespace Stream {
	class IntStream {
	private:
		std::vector<int>::iterator left, right;
		std::vector<int> vector_;
	public:
		void set(std::vector<int> v);
		void set_iterator(std::vector<int>::iterator left_, std::vector<int>::iterator right_);
		void function(std::function<int(int)> f);
		void print()noexcept;
	};
}