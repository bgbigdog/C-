#include <iostream>
using namespace std;

class point
{
public:
    void setX(int x)
    {
        m_x = x;
    };

    int getX()
    {
        return m_x;
    };

    void setY(int y)
    {
        m_y = y;
    };

    int getY()
    {
        return m_y;
    };

private:
    int m_x;
    int m_y;
};

class circle
{
public:
    void setR(int r)
    {
        m_R = r;
    };

    int getR()
    {
        return m_R;
    };

    void setCenter(int x, int y)
    {
        m_Center.setX(x);
        m_Center.setY(y);
    };

    point getCenter()
    {
        return m_Center;
    };

    void comparison(point &point)
    {
        int distabance = (point.getX() - m_Center.getX()) * (point.getX() - m_Center.getX()) + (point.getY() - m_Center.getY()) * (point.getY() - m_Center.getY());
        if (distabance == m_R * m_R)
        {
            printf("点在圆上\n");
        };

        if (distabance < m_R * m_R)
        {
            printf("点在圆内\n");
        };

        if (distabance > m_R * m_R)
        {
            printf("点在圆外\n");
        };
    };

private:
    int m_R;
    point m_Center;
};

int main()
{
    point core;
    core.setX(10);
    core.setY(0);
    circle circle;
    circle.setCenter(0, 0);
    circle.setR(10);
    circle.comparison(core);
    system("pause");
    return 0;
}