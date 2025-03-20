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
	}// Circle Ŭ������ innerRadius, OuterRadius�� ������ ������ ����
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
	donut.radius = 1; // donut ��ü�� �������� 1�� ����
	double area = donut.getArea(); // donut ��ü�� ���� �˾Ƴ���
	cout << "donut ������ " << area << endl;

	Circle pizza;
	pizza.radius = 30; // pizza ��ü�� �������� 30���� ����
	area = pizza.getArea(); // pizza ��ü�� ���� �˾Ƴ���
	cout << "pizza ������ " << area << endl;

	Circle donut_two;
	donut_two.radius = 2;
	area = donut_two.getArea();
	cout << "donut_two ������ " << area << endl;

	Rectangle rect;

	rect.width = 3;
	rect.height = 5;

	cout << "�簢���� ������ " << rect.getArea() << endl;

	return 0;
}