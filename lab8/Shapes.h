class Shape{
public:
    virtual void Scale(float scaleFactor) = 0;
    virtual void Display() const = 0;
    virtual ~Shape();
};

class Shape2D : virtual public Shape {
public:
    virtual float Area() const = 0;
    virtual void ShowArea() const = 0;
    bool operator > (const Shape2D &rhs) const;
    bool operator < (const Shape2D &rhs) const;
    bool operator == (const Shape2D &rhs) const;
};

class Square : public Shape2D {
public:
    virtual void Scale(float scaleFactor);
    virtual void Display() const;

    float length;
    float area;
    float Area() const;
    void ShowArea() const;

    Square();
    Square(float l);
};

class Rectangle : public Shape2D {
public:
    virtual void Scale(float scaleFactor);
    virtual void Display() const;

    float width;
    float length;
    float area;
    float Area() const;
    void ShowArea() const;


    Rectangle();
    Rectangle(float l, float w);
};

class Triangle : public Shape2D {
public:
    virtual void Scale(float scaleFactor);
    virtual void Display() const;

    float base;
    float height;
    float area;
    float Area() const;
    void ShowArea() const;


    Triangle();
    Triangle(float b, float h);
};

class Circle : public Shape2D {
public:
    virtual void Scale(float scaleFactor);
    virtual void Display() const;

    float radius;
    float area;
    float Area() const;
    void ShowArea() const;


    Circle();
    Circle(float r);
};

class Ellipse : public Shape2D {
public:
    virtual void Scale(float scaleFactor);
    virtual void Display() const;

    float minoraxis;
    float majoraxis;
    float area;
    float Area() const;
    void ShowArea() const;


    Ellipse();
    Ellipse(float a, float b);
};

class Trapezoid : public Shape2D {
public:
    virtual void Scale(float scaleFactor);
    virtual void Display() const;

    float sideA;
    float sideB;
    float height;
    float area;
    float Area() const;
    void ShowArea() const;


    Trapezoid();
    Trapezoid(float a, float b, float h);
};

class Sector : public Shape2D {
public:
    virtual void Scale(float scaleFactor);
    virtual void Display() const;

    float angle;
    float radius;
    float theta;
    float area;
    float Area() const;
    void ShowArea() const;

    Sector();
    Sector(float r, float a);
};


class Shape3D : virtual public Shape {
public:
    float volume;
    virtual float Volume() const = 0;
    virtual void ShowVolume() const = 0;
    bool operator > (const Shape3D &rhs) const;
    bool operator < (const Shape3D &rhs) const;
    bool operator == (const Shape3D &rhs) const;
};

class TriangularPyramid : public Shape3D, private Triangle {
public:
    virtual void Scale(float scaleFactor);
    virtual void Display() const;

    float height2;
    float volume;
    float Volume() const;
    void ShowVolume() const;

    TriangularPyramid();
    TriangularPyramid(float h2, float b, float h);
};

class RectangularPyramid : public Shape3D, private Rectangle {
public:
    virtual void Scale(float scaleFactor);
    virtual void Display() const;

    float height;
    float volume;
    float Volume() const;
    void ShowVolume() const;

    RectangularPyramid();
    RectangularPyramid(float h, float l, float w);
};

class Cylinder : public Shape3D, private Circle {
public:
    virtual void Scale(float scaleFactor);
    virtual void Display() const;

    float height;
    float volume;
    float Volume() const;
    void ShowVolume() const;

    Cylinder();
    Cylinder(float h, float r);
};

class Sphere : public Shape3D, private Circle {
public:
    virtual void Scale(float scaleFactor);
    virtual void Display() const;

    float radius;
    float volume;
    float Volume() const;
    void ShowVolume() const;

    Sphere();
    Sphere(float r);
};