#include <iostream>
using namespace std;
//Defining class point
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
// Difining class now
class rectangle
{
private:
    point tr,tl,br,bl;
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
        cout << "The points at the corners are:\n";
        cout << "Top right: ";
        tr.print();
        cout << "\nTop left: ";
        tl.print();
        cout << "\nBottom left: ";
        bl.print();
        cout << "\nBottom right ";
        br.print();
    }
};
//Defining Main functiuon
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

    cout << "\n\nOf this rectangle, ";
    rect1.print();

    rectangle rect2;

    cout << "\n\nOf the default rectangle, ";
    rect2.print();
	return 0;

}