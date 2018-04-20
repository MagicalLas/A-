
#include "stdafx.h"
#include<iostream>
#include<stdio.h>
#include<functional>
#include<vector>

using namespace std;

template<typename f = function<int(void)>>
class IntStream {
public:
	IntStream(f func) {
		this->first_num = 1;
		this->func = func;
	};

	IntStream map(function<int(int)>) {

	};
	IntStream filter(function<bool(int)>) {
	};
	IntStream limit(int number) {

	};
	IntStream foreach(function<void(int)>) {

	};
	IntStream reduce(function<int(int, int)>) {

	};
	IntStream iterator(function<int(int)>) {
	};

	int do_it() {
		int num = this->first_num;
		num = func(num);
		return num;
	}
private:
	int first_num;
	int function_num;
	f func;
};
int main() {
}