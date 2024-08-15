#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void mainMenu();

class Details{

  public:
    static string name,gender;
    int phone;
    int age;
    string address;
    static int id;
    char arr[100];
    void information()
    {
     cout <<"\n enter customer's ID:";
     cin >>id;
     cout <<"\n enter customer's name:";
     cin >>name;
     cout <<"\n enter customer's age:";
     cin >>age;
     cout <<"\n enter customer's address:";
     cin >>address;
     cout <<"\n enter customer's gender:";
     cin >>gender;
     cout<<"your details are saved ith us\n";
    }
};
int Details::id;
string Details::name;
string Details::gender;

class registration
{
 public:
     static int choice;
     int cho1;
     int backToMenu;
     static float charges;

     void flights()
     {
         string flight[]={"dubai","canada","UK","US","europe","russia"};
         for(int a=0;a<6;a++)
         {
             cout<<(a+1)<<".flight to "<<flight[a];
             cout<<"\n";
         }
         cout<<"\n welcome to the airlines!";
         cout<<"\n chose the country you ant to fly to";
         cin>>choice;
         switch(choice)
         {
           case 1:
           {
            cout<<"\n ___________welcome to dubai Emirates_____________";

            cout<<"\nfollowing are the flights \n";

            cout<<"\n 1.DUB-356";
            cout<<"\n \t08-01-2024 7:00AM 10hrs Rs. 14000";
            cout<<"\n 1.DUB-467";
            cout<<"\n \t09-01-2024 9:00AM 10hrs Rs. 10000";
            cout<<"\n 1.DUB-489";
            cout<<"\n \t10-01-2024 12:00AM 10hrs Rs. 9000";

            cout<<"\n select the flight you want to book:";
            cin>>cho1;

            if(cho1==1)
              {
              charges=14000;
                cout<<"\n you have successfully booked the flight DUB-356";
                cout<<"\n you can go back to menu and take the ticket";
              }
            else if(cho1==2)
              {
              charges=10000;
                cout<<"\n you have successfully booked the flight DUB-467";
                cout<<"\n you can go back to menu and take the ticket";
              }
            else if(cho1==3)
              {
              charges=9000;
                cout<<"\n you have successfully booked the flight DUB-489";
                cout<<"\n you can go back to menu and take the ticket";
              }
            else
                {
                cout<<"\n invalid input,shifting to the flights menu";
                flights();
                }
            cout<<"\n press any key to go back the main menu";
            cin>>backToMenu;
            if(backToMenu==1)
            {
             mainMenu();
             break;
            }
            else
            {
            mainMenu();
            break;
            }
          }
    case 2:
        {
             cout<<"\n ___________welcome to Canada_____________";

            cout<<"\n following are the flights \n";

            cout<<"\n 1.CAN-123";
            cout<<"\n \t08-01-2024 5:00AM 6hrs Rs. 34000";
            cout<<"\n 1.CAN-157";
            cout<<"\n \t09-01-2024 7:00AM 7hrs Rs. 29000";
            cout<<"\n 1.CAN-189";
            cout<<"\n \t10-01-2024 10:00AM 9hrs Rs. 18000";

            cout<<"\n select the flight you want to book:";
            cin>>cho1;

            if(cho1==1)
              {
              charges=34000;
                cout<<"\n you have successfully booked the flight CAN-123";
                cout<<"\n you can go back to menu and take the ticket";
              }
            else if(cho1==2)
              {
              charges=29000;
                cout<<"\n you have successfully booked the flight CAN-157";
                cout<<"\n you can go back to menu and take the ticket";
              }
            else if(cho1==3)
              {
              charges=18000;
                cout<<"\n you have successfully booked the flight CAN-189";
                cout<<"\n you can go back to menu and take the ticket";
              }
            else
                {
                cout<<"\n invalid input,shifting to the flights menu";
                flights();
                }
            cout<<"\n press any key to go back the main menu";
            cin>>backToMenu;
            if(backToMenu==1)
            {
             mainMenu();
             break;
            }
            else
            {
            mainMenu();
            break;
            }

        }
        case 3:
        {
             cout<<"\n ___________welcome to UK_____________\n";

            cout<<"\n following are the flights \n";

            cout<<"\n 1.UK-119";
            cout<<"\n \t08-01-2024 11:00AM 13hrs Rs. 9000";
            cout<<"\n 1.UK-232";
            cout<<"\n \t09-01-2024 15:00AM 16hrs Rs. 5000";
            cout<<"\n 1.UK-337";
            cout<<"\n \t10-01-2024 18:00AM 19hrs Rs. 6000";

            cout<<"\n select the flight you want to book:";
            cin>>cho1;

            if(cho1==1)
              {
              charges=9000;
                cout<<"\n you have successfully booked the flight UK-119";
                cout<<"\n you can go back to menu and take the ticket";
              }
            else if(cho1==2)
              {
              charges=5000;
                cout<<"\n you have successfully booked the flight UK-232";
                cout<<"\n you can go back to menu and take the ticket";
              }
            else if(cho1==3)
              {
              charges=6000;
                cout<<"\n you have successfully booked the flight UK-337";
                cout<<"\n you can go back to menu and take the ticket";
              }
            else
                {
                cout<<"\n invalid input,shifting to the flights menu";
                flights();
                }
            cout<<"\n press any key to go back the main menu";
            cin>>backToMenu;
            if(backToMenu==1)
            {
             mainMenu();
             break;
            }
            else
            {
            mainMenu();
            break;
            }

        }
        case 4:
        {
           cout<<"\n ___________welcome to USA_____________";

            cout<<"\n following are the flights \n";

            cout<<"\n 1.USA-500";
            cout<<"\n \t08-01-2024 5:30AM 1hrs Rs. 1000";
            cout<<"\n 1.USA-550";
            cout<<"\n \t09-01-2024 6:20AM 2hrs Rs. 2000";
            cout<<"\n 1.USA-600";
            cout<<"\n \t10-01-2024 7:10AM 3hrs Rs. 3000";

            cout<<"\n select the flight you want to book:";
            cin>>cho1;

            if(cho1==1)
              {
              charges=1000;
                cout<<"\n you have successfully booked the flight USA-500";
                cout<<"\n you can go back to menu and take the ticket";
              }
            else if(cho1==2)
              {
              charges=2000;
                cout<<"\n you have successfully booked the flight USA-550";
                cout<<"\n you can go back to menu and take the ticket";
              }
            else if(cho1==3)
              {
              charges=3000;
                cout<<"\n you have successfully booked the flight USA-600";
                cout<<"\n you can go back to menu and take the ticket";
              }
            else
                {
                cout<<"\n invalid input,shifting to the flights menu";
                flights();
                }
            cout<<"\n press any key to go back the main menu";
            cin>>backToMenu;
            if(backToMenu==1)
            {
             mainMenu();
             break;
            }
            else
            {
            mainMenu();
            break;
            }

        }
        case 5:
        {
            cout<<"\n ___________welcome to russia_____________";

            cout<<"\nfollowing are the flights \n";

            cout<<"\n 1.RUS-200";
            cout<<"\n \t08-01-2024 7:00AM 10hrs Rs. 14000";
            cout<<"\n 1.RUS-240";
            cout<<"\n \t09-01-2024 9:00AM 10hrs Rs. 10000";
            cout<<"\n 1.RUS-280";
            cout<<"\n \t10-01-2024 12:00AM 10hrs Rs. 9000";

            cout<<"\n select the flight you want to book:";
            cin>>cho1;

            if(cho1==1)
              {
              charges=14000;
                cout<<"\n you have successfully booked the flight RUS-200";
                cout<<"\n you can go back to menu and take the ticket";
              }
            else if(cho1==2)
              {
              charges=10000;
                cout<<"\n you have successfully booked the flight RUS-240";
                cout<<"\n you can go back to menu and take the ticket";
              }
            else if(cho1==3)
              {
              charges=9000;
                cout<<"\n you have successfully booked the flight RUS-280";
                cout<<"\n you can go back to menu and take the ticket";
              }
            else
                {
                cout<<"\n invalid input,shifting to the flights menu";
                flights();
                }
            cout<<"\n press any key to go back the main menu";
            cin>>backToMenu;
            if(backToMenu==1)
            {
             mainMenu();
             break;
            }
            else
            {
            mainMenu();
            break;
            }

        }
        case 6:
        {
            cout<<"\n ___________welcome to europe_____________";

            cout<<"\n following are the flights :\n";

            cout<<"\n 1.EU-022";
            cout<<"\n\t 08-01-2024 3:00AM 1hrs Rs. 12300";
            cout<<"\n 1.EU-076";
            cout<<"\n\t 09-01-2024 4:50AM 2hrs Rs. 14500";
            cout<<"\n 1.EU-100";
            cout<<"\n\t 10-01-2024 5:50AM 2hrs Rs. 15600";

            cout<<"\n select the flight you want to book:";
            cin>>cho1;

            if(cho1==1)
              {
              charges=12300;
                cout<<"\n you have successfully booked the flight EU-022";
                cout<<"\n you can go back to menu and take the ticket";
              }
            else if(cho1==2)
              {
              charges=14500;
                cout<<"\n you have successfully booked the flight EU-076";
                cout<<"\n you can go back to menu and take the ticket";
              }
            else if(cho1==3)
              {
              charges=15600;
                cout<<"\n you have successfully booked the flight EU-100";
                cout<<"\n you can go back to menu and take the ticket";
              }
            else
                {
                cout<<"\n invalid input,shifting to the flights menu";
                flights();
                }
            cout<<"\n press any key to go back the main menu";
            cin>>backToMenu;
            if(backToMenu==1)
            {

             mainMenu();
             break;
            }
            else
            {
            mainMenu();
            break;
            }

        }
    default:
        {
            cout<<"\n invalid input,shifting you to the main menu";
            mainMenu();
            break;
        }

      }
     }
};
float registration::charges;
int registration::choice;

class ticket : public registration,Details
{
   public:
        void Bill()
          {
            ///outf is an instance of the std::ofstream class, which stands for "output file stream."
            string destination="";
            ofstream outf("records.txt");
            {
            outf<<"\n ___________XYZ airlines__________";
            outf<<"\n___________ticket________________";
            outf<<"\n _________________________________";

            outf<<"\n Customer ID:"<<Details::id;
            outf<<"\n Customer Name:"<<Details::name;
            outf<<"\n Customer Gender:"<<Details::gender;
            outf<<"\n Customer Phone:"<<Details::phone;
            outf<<"\n \t Description:";
            if(registration::choice==1)
               {
                 destination="dubai";
               }
              else if(registration::choice==2)
              {
                destination="Canada";
              }
              else if(registration::choice==3)
              {
                destination="UK";
              }
               else if(registration::choice==4)
              {
                destination="USA";
              }
               else if(registration::choice==5)
              {
                destination="Russia";
              }
               else if(registration::choice==6)
              {
                destination="Europe";
              }
              outf<<"\n Destination: \t\t"<<destination;
              outf<<"\n Flight cost:\t\t"<<registration::charges;
            }
        outf.close();
          }
        void display()
          {
            ifstream ifs("records.txt");
            {
                if(!ifs)
                {
                   cout<<"\n File error!";
                }
                while(!ifs.eof())
                {
                    ifs.getline(arr,100);
                    cout<<"\n"<<arr;
                }
            }
          }
};


void mainMenu()
{
int choice;
//int s;
int backToMenu;

cout <<"\t            XYZ Airlines \n";
cout <<"\n_______________Main Menu_____________________";

cout <<"\n_______________________________________________";
cout <<"\n\t\t\t\t\t\t|";
cout <<"\n|\t Press 1 to add customer's details  \t|";
cout <<"\n|\t Press 2 for registration           \t|";
cout <<"\n|\t Press 3 for tickets and charges    \t|";
cout <<"\n|\t Press 4 to exit the menu           \t|";
cout <<"\n\t\t\t\t\t\t|";
cout <<"\n_______________________________________________";
cout <<"\n\t\t";
cin>>choice;
Details d;
registration r;
ticket t;

   switch(choice)
    {
    case 1:
      {
        cout <<"\n_________Customers________\n";
        d.information();
        cout<<"\n Press any key to go back to main menu ";
        cin>>backToMenu;
        if(backToMenu==1)
        {
          mainMenu();
        }
        else
        {
          mainMenu();
        }
          break;
      }
    case 2:
       {
        cout<<"_\n ________Book a flight using this system________\n";
        r.flights();
        break;
       }
    case 3:
       {
        cout<<"\n _____Get your ticket_____\n";
        t.Bill();
        cout<<"\n Your ticket is printed,you can collect it \t";
        cout<<"\n press 1 to display your ticket";
        cin>>backToMenu;
        if(backToMenu==1)
        {
            t.display();
            cout<<"\n press any key to go back to main menu:";
            cin>>backToMenu;
            if(backToMenu==1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        else
        {
           mainMenu();
        }
        break;
       }
    case 4:
        {
           cout<<"\n\n\t______thank you_____";
           break;
        }
    default:
        cout<<"\n invalid input , please try again! \n";
        mainMenu();
        break;
    }
}

class Management
{
    public:
      Management()
      {
          mainMenu();
      }
};


int main()
{

    Management();
    return 0;
}
