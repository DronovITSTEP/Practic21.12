#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void func(int a) {
	cout << a;
}
/*
	Функция, которая не принимает никаких параметров
	и не возвращает никакого значения.
	*/
void f1() {
	cout << "function 1" << endl;
}
/*
Функция, которая принимает один параметр,
но не возвращает никакого значения
*/
void f2(char c) {
	cout << "function 2 " << c << endl;
}
/*
Функция, которая принимает два параметра,
но все еще не возвращает никакого значения
*/
void f3(int a, float f) {
	cout << "function 3 " << a << " " << f << endl;
}
/*
Функция, которая принимает два параметра,
и возвращает значение
*/
char f4(int a, long b) {
	return '*';
}
/*
Функция, которая принимает два параметра
и возвращает максимальное из двух значений:
*/
int f5(int a, int b) {
	// первый вариант
	if (a > b)
		return a;
	else
		return b;

	// второй вариант
	return (a > b) ?  a : b;

	//третий вариант
	if (a > b) return a;
	return b;

	//четвертый вариант
	return max(a, b);
}
/*
Написать функцию, выводящую на экран
прямоугольник с высотой N и шириной K.
*/
void printRect(int N, int K, char c) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < K; j++) {
			cout << c;
		}
		cout << endl;
	}
	cout << endl;
}
/*
	Написать функцию, вычисляющую факториал
	переданного ей числа.
*/
void factorial(unsigned int a) {
	long fact = 1;
	for (int i = 1; i <= a; i++) {
		fact *= i;
	}
	cout << "Factorial = " << fact << endl;
}
/*
Написать функцию, которая проверяет, является ли переданное
ей число простым? Число называется
простым, если оно делится без остатка только на себя
и на единицу.
*/
bool simpleNum(int a) {
	for (int i = 2; i < a; i++) {
		if (a % i == 0)
			return 0;
	}
	return 1;
}
/*
Написать функцию, которая возвращает куб числа.
*/
int cube(int a) {
	//return a * a * a;
	return pow(a, 3);
}

int main()
{
	/*
	Напишите программу, в которой объявляется
	массив размером 5×10 и массив размером 5×5. Первый
	массив заполняется случайными числами, в диапазоне
	от 0 до 50. Второй массив заполняется по следующему
	принципу: первый элемент второго массива равен сумме
	первого и второго элемента первого массива, 
	второй элемент второго массива равен сумму третьего и четвертого
	элемента первого массива.
	*/
	/*const int sizeFive = 5;
	const int sizeTen = 10;
	int arr[sizeFive][sizeTen];
	int arr2[sizeFive][sizeFive];

	srand(time(0));
	for (int i = 0; i < sizeFive; i++) {
		for (int j = 0; j < sizeTen; j++) {
			arr[i][j] = rand() % 51;
			cout << setw(2) << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < sizeFive; i++) {
		for (int j = 0, k = 0; j < sizeFive; j++, k += 2) {
			arr2[i][j] = arr[i][k] + arr[i][k + 1];
			cout << setw(2) << arr2[i][j] << " ";
		}
		cout << endl;
	}*/

	/*func(6);
	int b = 7;
	func(b);
	func(b * 2 + 7);*/
	/*f1();
	f2('f');
	f3(3, 5.7);
	cout << f4(5, 6789) << endl;
	cout << f5(8, 12);*/

	//printRect(5, 9, '*');
	//printRect(4, 10, '+');
	//printRect(12, 6, 56);
	//factorial(5);
	//factorial(-5);
	/*int a;
	cin >> a;
	if (simpleNum(a))
		cout << "Simple numder" << endl;
	else
		cout << "Not simple number" << endl;

	simpleNum(9) ? cout << "Simple numder" << endl :
				   cout << "Not simple number" << endl;*/
	cout << cube(6);
	



	/*
	Написать функцию для нахождения наибольшего из двух чисел.
	*/

	/*
	Написать функцию, которая возвращает истину, 
	если передаваемое значение положительное и ложь,
	если отрицательное.
	*/
}
