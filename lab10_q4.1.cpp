#include <iostream>
using namespace std;
//define class point
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
//Main function
int main()
{
    point p1;
        int pointX, pointY;
    cout << "Enter the coordinates of the point (x,y): \n";
    cin >> pointX >> pointY;
        p1.setter(pointX, pointY);
    cout << "Co-ordinates of the point are: ";
    p1.print();
	return 0;
}