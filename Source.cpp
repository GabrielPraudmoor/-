#include <iostream>
#include <fstream>
#include <string>
#include <random>
using namespace std;
random_device Rand;

template<typename Type>
Type summ(Type T1, Type T2) { //только один тип данных
	return T1 + T2;

}

template<typename A1, class A2, typename A3>
auto lessValue(A1 a, A2 b, A3 c) {
	decltype(a + b + c) min = a;
	if (min > b) min = b;
	if (min > c) min = c;
	return min;
}
template<typename T>
void ptint(T x) {
	cout << x << endl;
	
}
template<typename T, typename ...Args>
void print(T x, Args... var) {
	cout << x << " ";
	print(var...);
}
int summ(int k, ...) { // последний аргумент равен 0
	int* p = &k;
	int summ = 0;
	while (*p) {
		summ += *p;
		++p;
	}
	return summ;
}



int main() {
	summ(3, 4);
	//summ(3.1, 3); // нельзя разные типы данных
	cout << "min value" << lessValue(1, 1.1, "1") << endl;
	lessValue(1.0, 1.1, "1");
	lessValue(1.1, 1, "1");
	lessValue(5, 5.7, "a");
	printf("%s%f%i", "s22342!!!!", 3.4, 3);
	int x = 0;
	Test y;
	decltype(x) z;
		cout << endl << typeid(x).name() << " " << typeid(y).name() << endl;
}
