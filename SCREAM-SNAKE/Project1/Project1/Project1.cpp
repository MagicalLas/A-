// Project1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<stdio.h>
#include<functional>
#include<vector>

using namespace std;

template<typename f=function<int(void)>>
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
	IntStream reduce(function<int(int,int)>) {

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

template<typename T>
class Monad {
public:
	Monad() {
	}; 
	Monad(T val) {
		this->value = val;
	};
	T get_value() {
		return this -> value;
	};
	Monad cal(function<T(T,T)> f,T val) {
		return Monad(f(this->value, val));
	};
	Monad cal(function<T(T, T)> f, Monad val) {
		return Monad(f(this->value, val.get_value()));
	};
	Monad operator+(Monad &arg) {
		T tmp = this->value + arg.get_value();
		return Monad(tmp);
	};
	Monad operator=(T arg) {
		value = arg;
		return *this;
	};
	Monad operator=(Monad &arg) {
		return arg;
	};
private:
	T value;
};
int main() {
	auto f = [](int x, int y)->int{return x +y+69; };
	Monad<int> m;
	m = 5;
	Monad<int> o;
	o = 5;
	Monad<int> q = m + o;
	q=m.cal(f, o);
	cout << (q).get_value() << "wqe";
}