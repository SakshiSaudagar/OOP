#include <iostream>
using namespace std;

class My_distance
{
public:
    int my_distance_km;

    My_distance()
    {
        this->my_distance_km = 0;
    }

    My_distance(int d)
    {
        this->my_distance_km = d;
    }

    My_distance operator+(My_distance data)
    {
        My_distance temp;
        temp.my_distance_km = this->my_distance_km + data.my_distance_km;
        return temp;
    }

    void My_display()
    {
        cout << this->my_distance_km << endl;
    }
};

class Distance
{
public:
    int distance_km;

    Distance()
    {
        this->distance_km = 0;
    }

    Distance(int d)
    {
        this->distance_km = d;
    }

    void display()
    {
        cout << this->distance_km << endl;
    }

    Distance operator+(Distance data)
    {
        Distance temp;
        temp.distance_km = this->distance_km + data.distance_km;
        return temp;
    }

    My_distance operator+(My_distance d)
    {
        My_distance data;
        data.my_distance_km = this->distance_km + d.my_distance_km;
        return data;
    }
};

int main()
{
    Distance d1(30);
    Distance d2(40);

    Distance d3 = d1 + d2;
    d3.display();

    My_distance d4(50);
    My_distance d5(55);

    My_distance d6 = d4 + d5;
    My_distance d7 = d5 + d6;

    d6.My_display();
    d7.My_display();

    return 0;
}