// Project1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<stdio.h>
#include<functional>
#include<vector>
#include<experimental\coroutine>

using namespace std;

template<typename f=function<int(void)>>
class IntStream {
public:
	IntStream(f func) {
		this->first_num = 1;
		this->func = func;
	};
	IntStream(int val) {
		this->value = val;
	};
	IntStream map(function<int(int)>f) {
		this->value = f(this->value);
	};
	IntStream filter(function<bool(int)>f) {

	};
	IntStream limit(int number) {

	};
	IntStream foreach(function<void(int)>f) {

	};
	IntStream reduce(function<int(int,int)>f) {
		
	};
	IntStream iterator(function<int(int)>) {

	};
	
	int do_it() {
		int num = this->first_num;
		num = func(num);
		return num;
	}
private:
	int value;
	int first_num;
	int function_num;
	f func;
};


int main() {
	auto f = [](int x, int y)->int{return x +y+69; };
	cout << c.get_value();
}