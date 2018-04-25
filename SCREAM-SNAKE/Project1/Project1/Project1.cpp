// Project1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<stdio.h>
#include<functional>
#include<vector>
#include<experimental\coroutine>

using namespace std;


struct intS
{
	vector<int>::iterator left;
	vector<int>::iterator right;
	void set(vector<int>::iterator l, vector<int>::iterator r) {
		left = l;
		right = r;
	}
	void print() noexcept {
		for (auto i = left; i != right; ++i)
		{
			cout << *i << ",";
		}
	};
	void map (function<int(int)> f) noexcept {
		for (auto i = left; i != right; ++i)
		{
			cout << f(*i) << ",";
		}
	};
};

int main() {
	auto f = [](int x)->int{return x +2; };
	vector<int> v = {1,2,3,4,5,6,7,8,95,21};
	intS s;
	s.set(v.begin(), v.end());
	s.map(f);
}
