
#include "stdafx.h"
#include<iostream>
#include<stdio.h>
#include<functional>
#include<vector>

using namespace std;
class IntStream {
public:
	IntStream() {
		function_num = 0;
	};
	IntStream(int function_num_, vector<function<int(int)>> will_do_func) {
		function_num = function_num_;
		this->function_vec = will_do_func;
	};
	IntStream iterater(int a, function<int(int)> f) {
		function_vec[function_num] = f;
		first_num = a;
		return *this;
	};
	int do_it() {
		int num = this->first_num;
		for (int i = 0; i < function_num; i++)
		{
			function_vec[i](num);
		}
		return num;
	}
private:
	int first_num;
	int function_num;
	vector<function<int(int)>> function_vec;
};

int main() {
	IntStream a;
	int n = a.iterater(1, [](int x)->int {return x + 1; }).do_it();
	cout << n << "wqe";
}