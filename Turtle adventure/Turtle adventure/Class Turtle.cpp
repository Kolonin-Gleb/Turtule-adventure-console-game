#include "Class Turtle.h"

// Реализация геттеров
int Turtle::get_x()
{
    return this->x;
}

int Turtle::get_y()
{
    return this->y;
}

char Turtle::get_direction()
{
    return this->direction;
}

// Реализация сеттеров (описанных, как методы)
void Turtle::enter_x()
{
    int x = 0;
    cin >> x;
    this->x = x;
}

void Turtle::enter_y()
{
    int y = 0;
    cin >> y;
    this->y = y;
}

void Turtle::enter_direction()
{
    char direction = 'N';
    cin >> direction;
    this->direction = direction;
}

// Реализация конструкторов

Turtle::Turtle()
{
    x = 0;
    y = 0;
    Turtle::Turtle('N'); // исп. конструктор с 1 параметром (направлением)
    // Turtle:: - необходим, т.к. нельзя вызвать в конструкторе перегруженную версию
    // этого же конструктора
}

Turtle::Turtle(char direction)
{
    this->direction = direction;
}

Turtle::Turtle(int x, int y, char direction)
{
    this->x = x;
    this->y = y;
    Turtle::Turtle(direction);
}


// Реализация методов

void Turtle::enterStartPosition()
{
    cout << "Введите информацию об изначальном положении черепашки: " << endl << endl;

    cout << "Введите целочисленное значение координаты x для черепашки: ";
    enter_x();
    cout << endl;
    cout << "Введите целочисленное значение координаты y для черепашки: ";
    enter_y();
    cout << endl;

    cout << "Введите направление ( N - север, E - восток, S - юг, W - запад), " << endl;
    cout << "в которое смотрит черепашка: ";
    enter_direction();
    cout << endl;
}

void Turtle::info()
{
    cout << " \t\t Информация о черепашке: " << endl;
    cout << "Черепашка смотрит на " << direction << endl;
    cout << "Значение координаты x черепашки " << x << endl;
    cout << "Значение координаты y черепашки " << y << endl;
    cout << endl;
}


void Turtle::turn(char user_direction)
{
    // Повороты налево
    if (get_direction() == 'N' && user_direction == 'W')
    {
        turn_left();
    }
    else if (get_direction() == 'W' && user_direction == 'S')
    {
        turn_left();
    }
    else if (get_direction() == 'S' && user_direction == 'E')
    {
        turn_left();
    }
    else if (get_direction() == 'E' && user_direction == 'N')
    {
        turn_left();
    }
    
    // Повороты направо
    else if (get_direction() == 'N' && user_direction == 'E')
    {
        turn_right();
    }
    else if (get_direction() == 'E' && user_direction == 'S')
    {
        turn_right();
    }
    else if (get_direction() == 'S' && user_direction == 'W')
    {
        turn_right();
    }
    else if (get_direction() == 'W' && user_direction == 'N')
    {
        turn_right();
    }
    // Двойной поворот
    else
    {
        turn_right(); turn_right();
    }
}

void Turtle::turn_right()
{
    switch (this->direction)
    {
    case 'N':
        this->direction = 'E';
        break;
    case 'E':
        this->direction = 'S';
        break;
    case 'S':
        this->direction = 'W';
        break;
    case 'W':
        this->direction = 'N';
        break;
    }
}

void Turtle::turn_left()
{
    switch (this->direction)
    {
    case 'N':
        this->direction = 'W';
        break;
    case 'W':
        this->direction = 'S';
        break;
    case 'S':
        this->direction = 'E';
        break;
    case 'E':
        this->direction = 'N';
        break;
    }
}

void Turtle::step(int number_steps)
{
    switch (this->direction)
    {
    case 'N':
        this->y += number_steps;
        break;
    case 'W':
        this->x -= number_steps;
        break;
    case 'S':
        this->y -= number_steps;
        break;
    case 'E':
        this->x += number_steps;
        break;
    }
}


