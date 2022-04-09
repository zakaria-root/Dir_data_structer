#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

void gotoxy(short int x, short int y)
{
    static HANDLE h = NULL;
    if (!h)
        h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD c = {x, y};
    SetConsoleCursorPosition(h, c);
}

class Point
{
private:
    int x, y;

public:
    Point();         // constructeur 1
    Point(int);      // constructeur 2
    Point(int, int); // constructeur 3
    void affiche();
    void affiche(const char *);
};

Point::Point()
{
    x = 0;
    y = 0;
}

Point::Point(int abs)
{
    x = abs;
    y = abs;
}

Point::Point(int abs, int ord)
{
    x = abs;
    y = ord;
}

void Point::affiche()
{
    gotoxy(x, y);
    cout << "*";
}

void Point::affiche(const char *message)
{
    affiche();
    cout << message;
}

int main()
{
    system("cls");
    Point a;
    a.affiche(" point a ");
    Point b(5);
    b.affiche(" point b ");
    Point c(3, 12);
    c.affiche(" point c ");
    getch();
}