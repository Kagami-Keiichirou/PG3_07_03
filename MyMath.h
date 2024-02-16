#pragma once
template <typename T1, typename T2>

class MyMath{
public:
	T1 a;
	T2 b;

	MyMath(T1 a, T2 b) : a(a), b(b) {}

	T1 Min();
};

template<typename T1, typename T2>
inline T1 MyMath<T1, T2>::Min(){
	if (a >= b) {
		return static_cast<T1>(a);
	} else if (a < b) {
		return static_cast<T1>(b);
	}
}