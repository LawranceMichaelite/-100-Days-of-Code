#include <iostream>
#include <cmath>
using namespace std;

class Euclidean_Distance
{
private:
    int x;
    int y;

public:
    Euclidean_Distance();
    Euclidean_Distance(int, int);

    friend int return_X_CoOrdinates(Euclidean_Distance a);
    friend int return_Y_CoOrdinates(Euclidean_Distance a);
};

Euclidean_Distance ::Euclidean_Distance() : x(0), y(0)
{
}

Euclidean_Distance ::Euclidean_Distance(int x, int y) : x(x), y(y)
{
}

int return_X_CoOrdinates(Euclidean_Distance a)
{

    return a.x;
}

int return_Y_CoOrdinates(Euclidean_Distance a)
{

    return a.y;
}

int main()
{
    Euclidean_Distance points_1;
    Euclidean_Distance points_2(2, 4);

    cout << "X_Co-Ordinates are: (" << return_X_CoOrdinates(points_1) << " " << return_X_CoOrdinates(points_2) << " )" << endl;
    cout << "Y_Co-Ordinates are: (" << return_Y_CoOrdinates(points_1) << " " << return_Y_CoOrdinates(points_2) << " )" << endl;

    double answer = sqrt((pow(return_X_CoOrdinates(points_2) - return_X_CoOrdinates(points_1), 2)) + (pow(return_Y_CoOrdinates(points_2) - return_Y_CoOrdinates(points_1), 2)));
    cout << "The Euclidean Distance is: " << answer << endl;
}