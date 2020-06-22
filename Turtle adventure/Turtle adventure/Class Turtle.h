#pragma once

#include <iostream>
using namespace std;

class Turtle
{
    int x;
    int y;
    char direction;
public:

    // Прототипы конструкторов
    Turtle();
    Turtle(char direction);
    Turtle(int x, int y, char direction);

    // Прототипы методов

    void enterStartPosition();
    void info();


    void turn(char user_direction);
    void turn_right();
    void turn_left();
    void step(int number_steps);

    // Прототипы сеттеров (реализованных как методы) (с участием пользователя)
    void enter_x();
    void enter_y();
    void enter_direction();

    // Прототипы геттеров
    int get_x();
    int get_y();
    char get_direction();

};
