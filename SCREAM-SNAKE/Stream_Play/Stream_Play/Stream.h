#pragma once
namespace Stream {
	class IntStream {
	public:
		void set(std::vector<int> v);
		void set_iterator(std::vector<int>::iterator left_, std::vector<int>::iterator right_);
		void print();
		int sum();
		IntStream iterator(std::function<int(int)> f, int initialize, int num);
	private:
		std::vector<int>::iterator left, right;
		std::vector<int> vector_;
	};

};