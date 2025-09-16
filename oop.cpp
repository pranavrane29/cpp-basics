/*#include <iostream>
#include <conio.h>
using namespace std;    

class Sport {
    int items;
public:
    void getInput() {
        cout << "Enter the items of the sport\n";
        cin >> items;
    }

    void displayInput() {
        cout << "The sport has this equipment = " << items;
    }
};

class Team : private Sport {
    int players;
public:
    void input() {
        cout << "Enter the number of players in team\n";
        cin >> players;
    }
    void output() {
        cout << "The total no. of players in the team are = " << players;
    }
};

class Result : private Team {
    bool value;
public:
    void getdata() {
        cout << "Did the team won - ";
        cin >> value;
    }
    void putdata() {
        if (value == 0)
            cout << "The team lost!";
        else
            cout << "The team won!";
    }
};

void main() {
    Team t1;
    Sport s1;
    Result r1;

    t1.getInput();
    t1.displayInput();
    t1.input();
b
    r1.output();
    r1.getdata();
    r1.putdata();

    getch();
}*/

#include <iostream>
using namespace std;

class Sport {
    int equipments;
public:
    void getInput() {
        cout << "Enter the items of the sport: ";
        cin >> equipments;
    }
    void displayInput() {
        cout << "The sport has this equipment = " << equipments << endl;
    }
};

class Team : public Sport {
    int players;
public:
    void input() {
        getInput();         
        displayInput();     
        cout << "Enter the number of players in team: ";
        cin >> players;
    }
    void output() {
        cout << "The total number of players in the team are = " << players << endl;
    }
};

class Result : public Team {
    bool value;
public:
    void getdata() {
        input();       
        output();       
        cout << "Did the team win (1 for Yes / 0 for No): ";
        cin >> value;
    }
    void putdata() {
        if (value == 0)
            cout << "The team lost!" << endl;
        else
            cout << "The team won!" << endl;
    }
};

int main() {
    Result r1;

    r1.getdata();
    r1.putdata();

    return 0;
}