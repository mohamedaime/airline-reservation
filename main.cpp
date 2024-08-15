#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <windows.h>
using namespace std;
HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
void mainMenu();

class Details {
public:
    static string name, gender;
    static string id;
    int phone;
    int age;
    string address;

    void information() {
        SetConsoleTextAttribute(h,9);
        cout << "\nEnter customer's ID: ";
        cin >> id;
        cout << "\nEnter customer's name: ";
        cin >> name;
        cout << "\nEnter customer's age: ";
        cin >> age;
        cout << "\nEnter customer's address: ";
        cin >> address;
        cout << "\nEnter customer's gender: ";
        cin >> gender;
        cout << "Your details are saved with us\n";
    }
};

string Details::id;
string Details::name;
string Details::gender;

class Registration {
public:
    static int choice;
    int cho1;
    static float charges;

    void flights() {
        string flight[] = {"Dubai", "Canada", "UK", "USA", "Russia", "Europe"};
        for (int a = 0; a < 6; a++) {
            cout << (a + 1) << ". Flight to " << flight[a] << "\n";
        }
        cout << "\nWelcome to the airlines!";
        cout << "\nChoose the country you want to fly to: ";
        cin >> choice;
        if (choice < 1 || choice > 6) {
            cout << "\nInvalid choice, please try again.";
            flights();
            return;
        }

        switch (choice) {
        case 1: bookFlight("Dubai", {{"DUB-356", 14000}, {"DUB-467", 10000}, {"DUB-489", 9000}}); break;
        case 2: bookFlight("Canada", {{"CAN-123", 34000}, {"CAN-157", 29000}, {"CAN-189", 18000}}); break;
        case 3: bookFlight("UK", {{"UK-119", 9000}, {"UK-232", 5000}, {"UK-337", 6000}}); break;
        case 4: bookFlight("USA", {{"USA-500", 1000}, {"USA-550", 2000}, {"USA-600", 3000}}); break;
        case 5: bookFlight("Russia", {{"RUS-200", 14000}, {"RUS-240", 10000}, {"RUS-280", 9000}}); break;
        case 6: bookFlight("Europe", {{"EU-022", 12300}, {"EU-076", 14500}, {"EU-100", 15600}}); break;
        default: cout << "\nInvalid choice."; flights(); break;
        }

        cout << "\nPress any key to go back to the main menu.";
        cin.ignore().get();
        mainMenu();
    }

private:
    void bookFlight(const string& destination, const vector<pair<string, float>>& flights) {
        cout << "\n___________Welcome to " << destination << "___________";
        cout << "\nFollowing are the flights:\n";
        for (int i = 0; i < flights.size(); i++) {
            cout << (i + 1) << ". " << flights[i].first << " - Rs. " << flights[i].second << "\n";
        }

        cout << "\nSelect the flight you want to book: ";
        cin >> cho1;

        if (cho1 < 1 || cho1 > flights.size()) {
            cout << "\nInvalid input, shifting to the flights menu.";
          //  flights();
            return;
        }

        charges = flights[cho1 - 1].second;
        cout << "\nYou have successfully booked the flight " << flights[cho1 - 1].first;
        cout << "\nYou can go back to the menu and take the ticket.";
    }
};

float Registration::charges;
int Registration::choice;

class Ticket : public Registration, public Details {
public:
    void Bill() {
        string destination = getDestination();
        ofstream outf("records.txt");
        if (!outf) {
            cout << "\nError opening file for writing.";
            return;
        }

        outf << "\n___________XYZ Airlines__________";
        outf << "\n___________Ticket________________";
        outf << "\n_______________________________";
        outf << "\nCustomer ID: " << Details::id;
        outf << "\nCustomer Name: " << Details::name;
        outf << "\nCustomer Gender: " << Details::gender;
        outf << "\nCustomer Phone: " << phone;
        outf << "\nDescription: Flight to " << destination;
        outf << "\nFlight cost: Rs. " << Registration::charges;

        outf.close();
    }

    void display() {
        ifstream ifs("records.txt");
        if (!ifs) {
            cout << "\nError opening file for reading.";
            return;
        }

        string line;
        while (getline(ifs, line)) {
            cout << "\n" << line;
        }
    }

private:
    string getDestination() {
        switch (Registration::choice) {
        case 1: return "Dubai";
        case 2: return "Canada";
        case 3: return "UK";
        case 4: return "USA";
        case 5: return "Russia";
        case 6: return "Europe";
        default: return "Unknown";
        }
    }
};

void mainMenu() {
    int choice;
    SetConsoleTextAttribute(h,10);
    cout << "\t            XYZ Airlines \n";
    cout << "\n_______________Main Menu_____________________";
    cout << "\n_______________________________________________";
    cout << "\n\t\t\t\t\t\t|";
    SetConsoleTextAttribute(h,11);
    cout << "\n|\t Press 1 to add customer's details  \t|";
    SetConsoleTextAttribute(h,12);
    cout << "\n|\t Press 2 for registration           \t|";
    SetConsoleTextAttribute(h,13);
    cout << "\n|\t Press 3 for tickets and charges    \t|";
    SetConsoleTextAttribute(h,14);
    cout << "\n|\t Press 4 to exit the menu           \t|";
    SetConsoleTextAttribute(h,15);
    cout << "\n\t\t\t\t\t\t|";
    cout << "\n_______________________________________________";
    cout << "\n\t\t";
    cin >> choice;

    Details d;
    Registration r;
    Ticket t;

    switch (choice) {
    case 1:
        cout << "\n_________Customer Details________\n";
        d.information();
        cout <<"\n";
        cout << "\nPress any key to go back to main menu.";
        cin.ignore().get();
        mainMenu();
        break;
    case 2:
        cout << "\n_________Book a flight________\n";
        r.flights();
        break;
    case 3:
        cout << "\n_________Get your ticket________\n";
        t.Bill();
        cout << "\nYour ticket is printed, you can collect it.";
        cout << "\nPress 1 to display your ticket.";
        int backToMenu;
        cin >> backToMenu;
        if (backToMenu == 1) {
            t.display();
             cout << "\n";
            cout << "\nPress any key to go back to main menu:";
            cin.ignore().get();
        }
        mainMenu();
        break;
    case 4:
        cout << "\n\n\t______Thank you!______";
        break;
    default:
        cout << "\nInvalid input, please try again.";
        mainMenu();
        break;
    }
}

class Management {
public:
    Management() {
        mainMenu();
    }
};

int main() {
    Management management;
    return 0;
}
