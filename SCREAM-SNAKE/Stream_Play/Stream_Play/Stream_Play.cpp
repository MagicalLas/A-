// Stream_Play.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<stdio.h>
#include<functional>
#include<vector>

using namespace std;

struct IntStream
{
	vector<int>::iterator left, right;
	vector<int> vector_;
	[[noreturn]]void set(vector<int> v) {
		vector_ = v;
		left = vector_.begin();
		right = vector_.end();
	};
	[[deprecated, noreturn]]void set_iterator(vector<int>::iterator left_, vector<int>::iterator right_) {
		left = left_;
		right = right_;
	};
	[[noreturn]]void function(function<int(int)> f) noexcept {
		for (auto i = left; i != right; ++i)
		{
			*i = f(*i);
		}
	};
	[[noreturn]]void print() noexcept {
		for (auto i = left; i+1 != right; ++i)
		{
			cout << *i << ", ";
		}
		cout << *(right-1) << endl;
	};
	int sum() noexcept {
		int acc=0;
		for (auto i = left; i != right; ++i)
		{
			acc+=*i;
		}
		return acc;
	};
	//병렬
	[[nodiscard]]int sum_range(vector<int>::iterator l, vector<int>::iterator r) noexcept {
		int acc = 0;
		for (auto i = l; i != r; ++i)
		{
			acc += *i;
		}
		return acc;
	};
	[[nodiscard]]int reduce(std::function<int(int,int)> f) {
		for (auto i = left; i+1 != right; ++i)
		{
			*(i+1)=f(*(i), *(i+1));
		}
		return *(right - 1);
	};
};

int main() {
	vector<int> v = { 7,8,9, 1, 2, 3, 4 };
	IntStream s;
	
	s.set(v);
	s.function([](int x)->int {return (x + 1 )* 2; });
	int y =s.reduce([](int x, int y)->int {return x+y; });
	cout << y;
	s.print();
}