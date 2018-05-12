#pragma once
namespace Stream_ {
	template<typename T>
	class Wrapper {
	public:
		T value;
		Stream_::Wrapper<int> operator/(int v);
		Stream_::Wrapper<int> operator*(int v);
		Stream_::Wrapper<int> operator-(int v);
		Stream_::Wrapper<int> operator+(int v);
		Wrapper<int>(int value) {
			this->value = value;
		};
		bool operator==(int v);
	};

	Stream_::Wrapper<int> operator+(Stream_::Wrapper<int> w ,int v);
	Stream_::Wrapper<int> operator-(Stream_::Wrapper<int> w, int v);
	Stream_::Wrapper<int> operator*(Stream_::Wrapper<int> w, int v);
	Stream_::Wrapper<int> operator/(Stream_::Wrapper<int> w, int v);
	bool operator==(Stream_::Wrapper<int> w, int v);
}