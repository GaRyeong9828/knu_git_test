#include <iostream>
#include <string>
using namespace std;


class Circle {
public:
	int radius;
	double getArea();

	int innerRadius;
	int outerRadius;

	Circle() {
		radius = 0;
		innerRadius = 0;
		outerRadius = 0;
	}

	Circle(int inner, int outer) {
		innerRadius = inner;
		outerRadius = outer;
	}// Circle 클래스에 innerRadius, OuterRadius를 정수형 변수로 선언
};
double Circle::getArea() {
	return 3.14 * radius * radius;
}

class Rectangle {
public:
	int width, height;
	int getArea();
};

int Rectangle::getArea() {
	return width * height;
}

int main() {
	Circle donut;
	donut.radius = 1; // donut 객체의 반지름을 1로 설정
	double area = donut.getArea(); // donut 객체의 면적 알아내기
	cout << "donut 면적은 " << area << endl;

	Circle pizza;
	pizza.radius = 30; // pizza 객체의 반지름을 30으로 설정
	area = pizza.getArea(); // pizza 객체의 면적 알아내기
	cout << "pizza 면적은 " << area << endl;

	Circle donut_two;
	donut_two.radius = 2;
	area = donut_two.getArea();
	cout << "donut_two 면적은 " << area << endl;

	Rectangle rect;

	rect.width = 3;
	rect.height = 5;

	cout << "사각형의 면적은 " << rect.getArea() << endl;

	return 0;
}