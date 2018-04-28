#include<iostream>
#include<stdio.h>
#include<functional>
#include "stdafx.h"
#include<vector>

using namespace std;

struct IntStream
{
	vector<int>::iterator left, right;
	void set(vector<int> v) {
		left = v.begin();
		right = v.end();
	};
	void f(function<int(int)> g) {
		for (int i = 0; left!=right; left++)
		{
			*left=g(*left);
		}
	};
	void print() {
		for (int i = 0; left != right; left++)
		{
			cout << *left << " ";
		}
	};
};

int main() {
	vector<int> v = {1,2,3,4,5,6,7,8,9};
	IntStream s;
	s.set(v);
	s.f([](int x)->int {return 4; });
	s.print();
}