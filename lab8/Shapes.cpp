#include "Shapes.h"
#include <iostream>
#include <vector>
#include <math.h>


using namespace std;

constexpr float pi = 3.14159;

Shape::~Shape() {

}

//2D starts here
//
bool Shape2D::operator<(const Shape2D &rhs) const {
    if (this->Area() < rhs.Area()) {
        return true;
    }

    else {
        return false;
    }
}

bool Shape2D::operator>(const Shape2D &rhs) const {
    if (this->Area() > rhs.Area()) {
        return true;
    }

    else {
        return false;
    }
}

bool Shape2D::operator==(const Shape2D &rhs) const {
    if (this->Area() == rhs.Area()) {
        return true;
    }

    else {
        return false;
    }
}


//Square
void Square::Scale(float scaleFactor) {
    length = length * scaleFactor;
    area = Square(length).Area();
}
void Square::Display() const {
    ShowArea();
    cout << "Length of side: ";
    cout << length << endl;
}
float Square::Area() const {
    return area;
}
void Square::ShowArea() const {
    cout << "The area of the Square is : ";
    cout << area << endl;

}
Square::Square() {
    length = 0;
    area = 0;
}
Square::Square(float l) {
    length = l;
    area = length * length;
}


//Rectangle
void Rectangle::Scale(float scaleFactor) {
    width = width * scaleFactor;
    length = length * scaleFactor;
    area = Rectangle(width, length).Area();
}
void Rectangle::Display() const {
    ShowArea();
    cout << "Length: ";
    cout << length << endl;
    cout << "Width: ";
    cout << width << endl;
}
float Rectangle::Area() const {
    return area;
}
void Rectangle::ShowArea() const {
    cout << "The area of the Rectangle is : ";
    cout << area << endl;
}
Rectangle::Rectangle() {
    width = 0;
    length = 0;
    area = 0;
}
Rectangle::Rectangle(float l, float w) {
    width = w;
    length = l;
    area = width * length;
}


//Triangle
void Triangle::Scale(float scaleFactor) {
    base = base * scaleFactor;
    height = height * scaleFactor;
    area = Triangle(base, height).Area();
}
void Triangle::Display() const {
    ShowArea();
    cout << "Base: ";
    cout << base << endl;
    cout << "Height: ";
    cout << height << endl;
}
float Triangle::Area() const {
    return area;
}
void Triangle::ShowArea() const {
    cout << "The area of the Triangle is : ";
    cout << area << endl;
}
Triangle::Triangle() {
    base = 0;
    height = 0;
    area = 0;
}
Triangle::Triangle(float b, float h) {
    base = b;
    height = h;
    area = (base * height) / 2;
}


//Circle
void Circle::Scale(float scaleFactor) {
    radius = radius * scaleFactor;
    area = Circle(radius).Area();
}
void Circle::Display() const {
    ShowArea();
    cout << "Radius: ";
    cout << radius << endl;
}
float Circle::Area() const {
    return area;
}
void Circle::ShowArea() const {
    cout << "The area of the Circle is : ";
    cout << area << endl;
}
Circle::Circle() {
    radius = 0;
}
Circle::Circle(float r) {
    radius = r;
    area = pi * radius * radius;
}


//Ellipse
void Ellipse::Scale(float scaleFactor) {
    minoraxis = minoraxis * scaleFactor;
    majoraxis = majoraxis * scaleFactor;
    area = Ellipse(majoraxis, minoraxis).Area();
}
void Ellipse::Display() const {
    ShowArea();
    cout << "Length of semi-major axis: ";
    cout << majoraxis << endl;
    cout << "Length of semi-minor axis: ";
    cout << minoraxis << endl;
}
float Ellipse::Area() const {
    return area;
}
void Ellipse::ShowArea() const {
    cout << "The area of the Ellipse is : ";
    cout << area << endl;
}
Ellipse::Ellipse() {
    minoraxis = 0;
    majoraxis = 0;
}
Ellipse::Ellipse(float a, float b) {
    majoraxis = a;
    minoraxis = b;
    area = M_PI * minoraxis* majoraxis;
}


//Trapezoid
void Trapezoid::Scale(float scaleFactor) {
    sideA = sideA * scaleFactor;
    sideB = sideB * scaleFactor;
    height = height * scaleFactor;
    area = Trapezoid(sideA, sideB, height).Area();
}
void Trapezoid::Display() const {
    ShowArea();
    cout << "Length of side A: ";
    cout << sideA << endl;
    cout << "Length of side B: ";
    cout << sideB << endl;
    cout << "Height: ";
    cout << height << endl;
}
float Trapezoid::Area() const {
    return area;
}
void Trapezoid::ShowArea() const {
    cout << "The area of the Trapezoid is : ";
    cout << area << endl;
}
Trapezoid::Trapezoid() {
    sideA = 0;
    sideB = 0;
    height = 0;
    area = 0;
}
Trapezoid::Trapezoid(float a, float b, float h) {
    sideA = a;
    sideB = b;
    height = h;
    area = ((sideA + sideB) / 2) * height;
}


//Sector
void Sector::Scale(float scaleFactor) {
    radius = radius * scaleFactor;
    angle = angle * scaleFactor;
    theta = theta * scaleFactor;
    area = Sector(radius, angle).Area();
}
void Sector::Display() const {
    ShowArea();
    cout << "Radius: ";
    cout << radius << endl;
    cout << "Angle in radians: ";
    cout << theta << endl;
    cout << "Angle in degrees: ";
    cout << angle << endl;
}
float Sector::Area() const {
    return area;
}
void Sector::ShowArea() const {
    cout << "The area of the Sector is : ";
    cout << area << endl;
}
Sector::Sector() {
    radius = 0;
    angle = 0;
    theta = 0;
    area = 0;
}
Sector::Sector(float r, float a) {
    radius = r;
    angle = a;
    theta = angle * (M_PI / 180.0f);
    area = (radius * radius * theta) / 2;
}



//3D Starts here
//
bool Shape3D::operator < (const Shape3D &rhs) const {
    if (this->Volume() < rhs.Volume()) {
        return true;
    }

    else {
        return false;
    }
}

bool Shape3D::operator>(const Shape3D &rhs) const {
    if (this->Volume() > rhs.Volume()) {
        return true;
    }

    else {
        return false;
    }
}

bool Shape3D::operator==(const Shape3D &rhs) const {
    if (this->Volume() == rhs.Volume()) {
        return true;
    }

    else {
        return false;
    }
}


//TriangularPyramid
void TriangularPyramid::Scale(float scaleFactor) {
    height2 = height2 * scaleFactor;
    Triangle::base = Triangle::base * scaleFactor;
    Triangle::height = Triangle::height * scaleFactor;
    Triangle::area = Triangle(Triangle::base, Triangle::height).Area();
    volume = TriangularPyramid(height2, Triangle::base, Triangle::height).Volume();
}
void TriangularPyramid::Display() const {
    ShowVolume();
    cout << "The height is: ";
    cout << height2 << endl;
    cout << "The area of the Triangle is : ";
    cout << Triangle::Area() << endl;
    cout << "Base: ";
    cout << Triangle::base << endl;
    cout << "Height: ";
    cout << Triangle::height << endl;
}
float TriangularPyramid::Volume() const {
    return volume;
}
void TriangularPyramid::ShowVolume() const {
    cout << "The volume of the Triangular Pyramid is : ";
    cout << volume << endl;
}
TriangularPyramid::TriangularPyramid() {
    height2 = 0;
    volume = 0;
}
TriangularPyramid::TriangularPyramid(float h2, float b, float h) {
    height2 = h2;
    Triangle::base = b;
    Triangle::height = h;
    Triangle::area = Triangle(b, h).Area();
    volume =  (Triangle::Area()* height2) / 3;
}


//RectangularPyramid
void RectangularPyramid::Scale(float scaleFactor) {
    height = height * scaleFactor;
    Rectangle::length = Rectangle::length * scaleFactor;
    Rectangle::width = Rectangle::width * scaleFactor;
    Rectangle::area = Rectangle(Rectangle::length, Rectangle::width).Area();
    volume = RectangularPyramid(height, Rectangle::length, Rectangle::width).Volume();
}
void RectangularPyramid::Display() const {
    ShowVolume();
    cout << "The height is: ";
    cout << height << endl;
    cout << "The area of the Rectangle is : ";
    cout << Rectangle::Area() << endl;
    cout << "Length: ";
    cout << Rectangle::length << endl;
    cout << "Width: ";
    cout << Rectangle::width << endl;
}
float RectangularPyramid::Volume() const {
    return volume;
}
void RectangularPyramid::ShowVolume() const {
    cout << "The volume of the Rectangular Pyramid is : ";
    cout << volume << endl;
}
RectangularPyramid::RectangularPyramid() {
    height = 0;
    volume = 0;
}
RectangularPyramid::RectangularPyramid(float h, float l, float w) {
    height = h;
    Rectangle::length = l;
    Rectangle::width = w;
    Rectangle::area = Rectangle(l, w).Area();
    volume = (Rectangle::Area() * height) / 3;
}


//Cylinder
void Cylinder::Scale(float scaleFactor) {
    height = height * scaleFactor;
    Circle::radius = Circle::radius * scaleFactor;
    Circle::area = Circle(Circle::radius).Area();
    volume = Cylinder(height, Circle::radius).Volume();
}
void Cylinder::Display() const {
    ShowVolume();
    cout << "The height is: ";
    cout << height << endl;
    cout << "The area of the Circle is : ";
    cout << Circle::Area() << endl;
    cout << "Radius: ";
    cout << Circle::radius << endl;
}
float Cylinder::Volume() const {
    return volume;
}
void Cylinder::ShowVolume() const {
    cout << "The volume of the Cylinder is : ";
    cout << volume << endl;
}
Cylinder::Cylinder() {
    height = 0;
    volume = 0;
}
Cylinder::Cylinder(float h, float r) {
    height = h;
    Circle::radius = r;
    Circle::area = Circle(r).Area();
    volume = Circle::area * height;
}


//Sphere
void Sphere::Scale(float scaleFactor) {
    radius = radius * scaleFactor;
    Circle::radius = Circle::radius * scaleFactor;
    Circle::area = Circle(radius).Area();
    volume = Sphere(radius).Volume();
}
void Sphere::Display() const {
    ShowVolume();
    cout << "The area of the Circle is : ";
    cout << Circle::Area() << endl;
    cout << "Radius: ";
    cout << Circle::radius << endl;
}
float Sphere::Volume() const {
    return volume;
}
void Sphere::ShowVolume() const {
    cout << "The volume of the Sphere is : ";
    cout << volume << endl;
}
Sphere::Sphere() {
    radius = 0;
    volume = 0;
}
Sphere::Sphere(float r) {
    radius = r;
    Circle::radius = r;
    Circle::area = Circle(r).Area();
    volume = ((4.0f/3) * radius * Circle::Area());
}