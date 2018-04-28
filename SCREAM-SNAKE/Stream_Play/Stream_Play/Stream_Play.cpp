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
	void set(vector<int> v) {
		vector_ = v;
		left = vector_.begin();
		right = vector_.end();
	};
	[[deprecated]]void set_iterator(vector<int>::iterator l, vector<int>::iterator r) {
		left = l;
		right = r;
	};
	void f(function<int(int)> g) noexcept {
		for (auto i = left; i != right; ++i)
		{
			*i = g(*i);
		}
	};
	void print() noexcept {
		for (auto i = left; i+1 != right; ++i)
		{
			cout << *i << ", ";
		}
		cout << *(--right) << endl;
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
	int sum_range(vector<int>::iterator l, vector<int>::iterator r) noexcept {
		int acc = 0;
		for (auto i = l; i != r; ++i)
		{
			acc += *i;
		}
		return acc;
	};
};

int main() {
	vector<int> v = { 1,2,3,4,5,6,7,8,9 };
	IntStream s;
	
	s.set(v);
	s.f([](int x)->int {return (x + 1 )* 2; });
	s.print();
	int sum = s.sum_range(v.begin()+2,v.begin()+4);
	cout << sum;
}