#include <iostream>
using namespace std;
//defining class point
class point
{
private:
    float x;
    float y;
public:
    point (){}
    point (float x, float y)
    {
        this->x = x;
        this->y = y;
    }
    void print ();
    void setter(int, int);
    int getX();
    int getY();
};
void point :: print ()
{
    cout << "(" << x << "," << y << ")";
}
void point :: setter (int x, int y)
{
    this->x = x;
    this->y = y;
}
int point :: getX()
{
    return x;
}
int point :: getY()
{
    return y;
}

// defining class rectangle

class rectangle
{
private:
    point tr,tl,br,bl;
    float side1()
    {
        return tr.getX()-bl.getX();
    }
    float side2()
    {
        return tr.getY()-bl.getY();
    }
public:
    rectangle()
    {
        tr.setter(1,1);
        bl.setter(0,0);
        br.setter(1,0);
        tl.setter(0,1);
    }
    rectangle(point bottomLeft, point topRight)
    {
        tr = topRight;
        bl = bottomLeft;
        tl.setter(bottomLeft.getX(), topRight.getY());
        br.setter(topRight.getX(), bottomLeft.getY());
    }
    void print()
    {
        cout << "the four co-ordinates of the corners are:\n";
        cout << "Top right: ";
        tr.print();
        cout << "\nTop left: ";
        tl.print();
        cout << "\nBottom left: ";
        bl.print();
        cout << "\nBottom right ";
        br.print();
    }
    float area()
    {
        return side1()*side2();
    }
};
int main()
{
    int pointX, pointY;
    cout << "Enter the coordinate of the top right corner:\n";
    cin >> pointX >> pointY;
    point topRight(pointX, pointY);
    cout << "Enter the coordinate of the bottom left corner:\n";
    cin >> pointX >> pointY;
    point bottomLeft(pointX, pointY);
    rectangle rect1 (bottomLeft, topRight);
    cout << "Area of this rectangle is " << rect1.area();
	return 0;
}