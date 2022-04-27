#include <iostream>
using namespace std;

void PrintBoard()
{
    cout << "|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|" << endl;
    cout << "|  Free   | Kentucky| Chance  | Indiana | Illinois| B. & O. |Atlantic | Ventnor |  Water  |  Marvin |  Go To  |" << endl;
    cout << "| Parking |  Avenue |    ?    |  Avenue |  Avenue | Railroad| Avenue  |  Avenue |  Works  | Gardens |  Jail   |" << endl;
    cout << "|         |   $220  |         |   $220  |   $240  |   $200  |  $260   |   $260  |   $150  |  $280   |         |" << endl;
    cout << "|         |   RED   |         |   RED   |   RED   |         | YELLOW  |  YELLOW | UTILITY | YELLOW  |         |" << endl;
    cout << "|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|" << endl;
    cout << "| New York|                                                                                         | Pacific |" << endl;
    cout << "| Avenue  |                                                                                         |  Avenue |" << endl;
    cout << "|   $200  |                                                                                         |  $300   |" << endl;
    cout << "|  ORANGE |                                                                                         |  GREEN  |" << endl;
    cout << "|---------|                                                                                         |---------|" << endl;
    cout << "|Tennessee|                                                                                         |  North  |" << endl;
    cout << "|  Avenue |                                                                                         |Carolina |" << endl;
    cout << "|   $180  |                                                                                         |  Avenue |" << endl;
    cout << "|         |                                                                                         |  $300   |" << endl;
    cout << "|  ORANGE |                                                                                         |  GREEN  |" << endl;
    cout << "|---------|                                                                                         |---------|" << endl;
    cout << "|Community|                                                                                         |Community|" << endl;
    cout << "|  Chest  |                                                                                         |  Chest  |" << endl;
    cout << "|         |                                                                                         |         |" << endl;
    cout << "|         |                                                                                         |         |" << endl;
    cout << "|---------|                                                                                         |---------|" << endl;
    cout << "| St.James|                                         MONOPOLY                                        |Pennsylva|" << endl;
    cout << "|  Place  |                                                                                         |  -nia   |" << endl;
    cout << "|         |                                      -Alejandro Rubio                                   |  Avenue |" << endl;
    cout << "|   $180  |                                      -Justin Henderson                                  |         |" << endl;
    cout << "|  ORANGE |                                      -Uros Stikovic                                     |   $320  |" << endl;
    cout << "|         |                                      -Jaejoon Lee                                       |  GREEN  |" << endl;
    cout << "|         |                                      -Tanner Wagner                                     |         |" << endl;
    cout << "|         |                                                                                         |         |" << endl;
    cout << "|         |                                                                                         |         |" << endl;
    cout << "|         |                                                                                         |         |" << endl;
    cout << "|---------|                                                                                         |---------|" << endl;
    cout << "|Pennsylva|                                                                                         |ShortLine|" << endl;
    cout << "|  -nia   |                                                                                         | Railroad|" << endl;
    cout << "|Railroad |                                                                                         |         |" << endl;
    cout << "|  $200   |                                                                                         |   $200  |" << endl;
    cout << "|---------|                                                                                         |---------|" << endl;
    cout << "| Virginia|                                                                                         |  Chance |" << endl;
    cout << "|  Avenue |                                                                                         |    ?    |" << endl;
    cout << "|   $160  |                                                                                         |         |" << endl;
    cout << "|   PINK  |                                                                                         |         |" << endl;
    cout << "|---------|                                                                                         |---------|" << endl;
    cout << "|  States |                                                                                         |   Park  |" << endl;
    cout << "|  Avenue |                                                                                         |   Place |" << endl;
    cout << "|   $140  |                                                                                         |   $350  |" << endl;
    cout << "|   PINK  |                                                                                         |   BLUE  |" << endl;
    cout << "|---------|                                                                                         |---------|" << endl;
    cout << "|Electric |                                                                                         |  Luxury |" << endl;
    cout << "| Company |                                                                                         |   Tax   |" << endl;
    cout << "|         |                                                                                         |         |" << endl;
    cout << "|  $150   |                                                                                         |   Pay   |" << endl;
    cout << "| UTILITY |                                                                                         |  $100   |" << endl;
    cout << "|---------|                                                                                         |---------|" << endl;
    cout << "|   St.   |                                                                                         |  Board  |" << endl;
    cout << "| Charles |                                                                                         |  Walk   |" << endl;
    cout << "|  Place  |                                                                                         |         |" << endl;
    cout << "|   $140  |                                                                                         |  $400   |" << endl;
    cout << "|   PINK  |                                                                                         |   BLUE  |" << endl;
    cout << "|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|" << endl;
    cout << "|  Jail   |Connectic| Vermont |  Chance | Oriental| Reading | Income  | Baltic  |Community|Mediterra|   GO    |" << endl;
    cout << "|         |   -ut   |  Avenue |    ?    |  Avenue | Railroad|  Tax    | Avenue  |  Chest  |  -nean  |         |" << endl;
    cout << "|         |  Avenue |         |         |         |         |         |         |         | Avenue  | Collect |" << endl;
    cout << "|         |  $120   |   $100  |         |   $100  |   $200  | PAY $200|   $60   |         |   $60   |  $200   |" << endl;
    cout << "|         |   SKY   |    SKY  |         |    SKY  |         |         |  BROWN  |         |  BROWN  |         |" << endl;
    cout << "|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|\n" << endl;
}

void ClearScreen()
{
    system("cls");
}

int main()
{
    while (cin.get())
    {
        ClearScreen();
        PrintBoard();
    }

    return 0;
}