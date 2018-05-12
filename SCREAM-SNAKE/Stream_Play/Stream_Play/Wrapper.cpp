#include"stdafx.h"
#include"Wrapper.h"
Stream_::Wrapper<int> Stream_::Wrapper<int>::operator/(int v) {
	if (value == 0 || v == 0) {
		value = 0;
		return *this;
	}
	value /= v;
	return *this;

};
Stream_::Wrapper<int> Stream_::Wrapper<int>::operator*(int v) {
	value *= v;
	return *this;
};
Stream_::Wrapper<int> Stream_::Wrapper<int>::operator+(int v) {
	value += v;
	return *this;
};
Stream_::Wrapper<int> Stream_::Wrapper<int>::operator-(int v) {
	value -= v;
	return *this;
};
bool Stream_::Wrapper<int>::operator==(int v) {
	return (value==v);
};

//전역 operator 선언
Stream_::Wrapper<int> Stream_::operator*(int v, Stream_::Wrapper<int>w) {
	return w.operator*(v);
};
Stream_::Wrapper<int> Stream_::operator/(int v, Stream_::Wrapper<int>w) {
	return w.operator/(v);
};
Stream_::Wrapper<int> Stream_::operator+(int v, Stream_::Wrapper<int>w) {
	return w.operator+(v);
};
Stream_::Wrapper<int> Stream_::operator-(int v, Stream_::Wrapper<int>w) {
	return w.operator-(v);
};