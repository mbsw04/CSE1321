#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class RoshamboPlayer {
private:
    string PlayerName;
    string Attack;
    int RoLimit;
    int ShamBoLimit;
public:
    RoshamboPlayer(string _PlayerName, int _RoLimit, int _ShamBoLimit) {
        PlayerName = _PlayerName;
        RoLimit = _RoLimit;
        ShamBoLimit = _ShamBoLimit;
    }

    string getName() {
        return PlayerName;
    }

    string getAttack() {
        srand((unsigned)time(0));
        int i;
        i = (rand() % 101);

        if (i <= RoLimit) {
            Attack = "Ro";
        }
        else if (i > RoLimit && i <= ShamBoLimit) {
            Attack = "Sham";
        }
        else {
            Attack = "Bo";
        }

        return Attack;
    }

    bool playRound(string _move) {
        if (_move.compare("Ro") == 0 && Attack.compare("Bo") == 0) {
            return true;
        }
        else if (_move.compare("Sham") == 0 && Attack.compare("Ro") == 0) {
            return true;
        }
        else if (_move.compare("Bo") == 0 && Attack.compare("Sham") == 0) {
            return true;
        }
        else {
            return false;
        }
    }
    
};

int main()
{
    cout << "[Ro-Sham-Bo Player]" << endl;

    RoshamboPlayer p1("Ray", 30, 60);
    RoshamboPlayer p2("Jay", 40, 85);

    cout << "Who do you want to face?" << endl;
    cout << "1) " << p1.getName() << endl;
    cout << "2) " << p2.getName() << endl;

    int player_choice;
    cout << "Opponent: ";
    cin >> player_choice;
    cout << endl;
    if (player_choice == 1) {
        cout << "Your opponent is " << p1.getName() << "!";
    }
    else {
        cout << "Your opponent is " << p2.getName() << "!";
    }

    cout << endl;
   

    while (true)
    {
        int choice;
        cout << "1) Play a round?" << endl;
        cout << "2) Quit?" << endl;
        cout << "Choice: ";
        cin >> choice;
        cout << endl;

        if (choice == 2) {
            cout << "Game Over";
            return 0;
        }
        else {
            string att;
            bool rd = 1;
            while(rd){
                rd = 0;
                cout << "Enter an attack: ";
                cin >> att;

                if (!(att.compare("Ro") == 0 || att.compare("Sham") == 0 || att.compare("Bo") == 0)) {
                    rd = 1;
                    cout << "Invalid attack!" << endl;
                }
            };
            
            if (player_choice == 1) {
                cout << p1.getName() << " chose " << p1.getAttack() << "! ";
                bool x = p1.playRound(att);
                if (x) {
                    cout << "You win!" << endl << endl;
                }
                else {
                    cout << "You lose..." << endl << endl;
                }
            }
            else {
                cout << p2.getName() << " chose " << p2.getAttack() << "! ";
                bool x = p2.playRound(att);
                if (x) {
                    cout << "You win!" << endl << endl;
                }
                else {
                    cout << "You lose..." << endl << endl;
                }
            }
        }

    }

}