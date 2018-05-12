#include"stdafx.h"
#include"Wrapper.h"
Stream_::Wrapper<int> Stream_::Wrapper<int>::operator/(int v) {
	if (value == 0 || v == 0) {
		Wrapper<int> a(0);
		return a;
	}
};
Stream_::Wrapper<int> Stream_::Wrapper<int>::operator*(int v) {
	return (value*v);
};
Stream_::Wrapper<int> Stream_::Wrapper<int>::operator+(int v) {
	return (value+v);
};
Stream_::Wrapper<int> Stream_::Wrapper<int>::operator-(int v) {
	return (value-v);
};
bool Stream_::Wrapper<int>::operator==(int v) {
	return (value==v);
};

//전역 operator 선언
Stream_::Wrapper<int> Stream_::operator*(Stream_::Wrapper<int>w, int v) {
	return (w.value*v);
};
Stream_::Wrapper<int> Stream_::operator/(Stream_::Wrapper<int>w, int v) {
	return (w.value/v);
};
Stream_::Wrapper<int> Stream_::operator+(Stream_::Wrapper<int>w, int v) {
	return (w.value+v);
};
Stream_::Wrapper<int> Stream_::operator-(Stream_::Wrapper<int>w, int v) {
	return (w.value-v);
};