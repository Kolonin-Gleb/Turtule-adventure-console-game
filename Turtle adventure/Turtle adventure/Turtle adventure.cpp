// Turtle adventure.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>

#include "Class Turtle.h"

using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Turtle turtle(0, 0, 'N');

    cout << "\t\t\t\t\t Игра Путешествие черепашки" << endl << endl;

    turtle.enterStartPosition();

    while (true)
    {
        system("cls");

        turtle.info();

        cout << "Введите направление ( N - север, E - восток, S - юг, W - запад) " << endl;
        cout << "В которое пойдет черепашка: ";
        char user_direction;
        cin >> user_direction;
        cout << endl;

        cout << "Введите положительное количество шагов, которое пройдёт черепашка: ";
        int number_steps = 0;
        cin >> number_steps;
        cout << endl;

        if (turtle.get_direction() == user_direction)
        {
            turtle.step(number_steps);
        }

        turtle.turn(user_direction);

        turtle.step(number_steps);

        turtle.info();

        cout << "Введите 1, если хотите остановить путешествие. " << endl;
        cout << "Введите 2, чтобы продолжить путешествие: ";
        int stop;
        cin >> stop;
        if (stop == 1)
        {
            system("cls");
            cout << "\t\t\t\tКонец игры!" << endl;
            Sleep(1000);
            break;
        }
    }

    return 0;
}