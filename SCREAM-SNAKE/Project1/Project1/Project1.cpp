// Project1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<stdio.h>
#include<functional>
#include<vector>

using namespace std;

template<typename f>
class IntStream {
public:
	
	IntStream(f func) {
		this->first_num = 1;
		this->func = func;
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
	auto f = [](int x)->int{return x + 5; };
	IntStream<function<int(int)>> a(f);
	int n = a.do_it();
	cout << n << "wqe";
}