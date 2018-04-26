
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
	void map(function<int(int)> f) noexcept {
		for (auto i = left; i != right; ++i)
		{
			cout << f(*i) << ",";
		}
	};
};
