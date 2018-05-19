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
		[[noreturn]]void set(std::vector<int> v);
		[[noreturn]]void function(std::function<int(int)> f)noexcept;
		[[noreturn]]void print()noexcept;
		[[nodiscard]]int sum() noexcept;
		int reduce(std::function<int(int, int)> f);
		IntStream iterator(std::function<int(int)> f, int initialize, int num);
		IntStream map(Stream_::Wrapper<int>(*las)(Stream_::Wrapper<int> v)) noexcept;
		int reduce(Stream_::Wrapper<int>(*las)(int acc, Stream_::Wrapper<int> v), int origin) noexcept;
	};
}