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
		Wrapper(int value) {
			this->value = value;
		};
		bool operator==(int v);
	};

	Stream_::Wrapper<int> operator+(int v, Stream_::Wrapper<int> w);
	Stream_::Wrapper<int> operator-(int v, Stream_::Wrapper<int> w);
	Stream_::Wrapper<int> operator*(int v, Stream_::Wrapper<int> w);
	Stream_::Wrapper<int> operator/(int v, Stream_::Wrapper<int> w);
	bool operator==(int v, Stream_::Wrapper<int> w);
}