#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void mainMenu();

class Management
{
public:
    Management()
    {
        mainMenu();
    }
};

class Details
{
public:

    static string name, gender;
    int phoneNo;
    int age;
    string add;
    static int cId;
    char arr[100];

    void information()
    {
        cout<<"\nEnter the Customer ID: ";
        cin>>cId;
        cout<<"\nEnter the name : ";
        cin>>name;
        cout<<"\nEnter the age : ";
        cin>>age;
        cout<<"\n Address : ";
        cin>>add;
        cout<<"\n Gender : ";
        cin>>gender;
        cout<<"\nYour Details are saved with us"<<endl;
    }
};

int Details::cId;
string Details::name;
string Details::gender;

class Registration
{
public:
    static int choice;
    int choice1;
    int back;
    static float charges;

    void flight()
    {
        string flightN[]={"Dubai","Canada","UK","USA","Australia","Europe"};

        for (int a=0;a<6;a++)
        {
            cout<<(a+1)<<". flight to"<<flightN[a]<<endl;
        }

        cout<<"\nWelcome to the Airlines!"<<endl;
        cout<<"Press the number of the country of which you want to book the flight:";
        cin>>choice;

        switch(choice)
        {
        case 1:
            {
                cout<<"___________________Welcome to the Dubai Emirates________________\n"<<endl;

                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;

                cout<<"Following are the flights \n"<<endl;

                cout<<"1.DUB - 498"<<endl;
                cout<<"\t08-06-2023 8:00AM 10hrs Rs. 14000"<<endl;
                cout<<"2.DUB - 658"<<endl;
                cout<<"\t09-06-2023 4:00AM 12hrs Rs. 10000"<<endl;
                cout<<"3.DUB - 488"<<endl;
                cout<<"\t11-06-2023 11:00AM 11hrs Rs. 12000"<<endl;

                cout<<"\nSelect the flight you want to book : ";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=14000;
                    cout<<"\n You have successfully booked the flight DUB - 498"<<endl;
                    cout<<"You can go back to the menu and take the ticket"<<endl;
                }

                else if(choice1==2)
                    {
                    charges=10000;
                    cout<<"\n You have successfully booked the flight DUB - 658"<<endl;
                    cout<<"You can go back to the menu and take the ticket"<<endl;
                }
                else if(choice1==3)
                    {
                    charges=12000;
                    cout<<"\n You have successfully booked the flight DUB - 488"<<endl;
                    cout<<"You can go back to the menu and take the ticket"<<endl;
                }
                else{
                    cout<<"Invalid input, shifting to the previous menu"<<endl;
                    flight();
                }

                cout<<"press any key to go back to the main menu:"<<endl;
                cin>>back;

                if(back==1)
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
                cout<<"___________________Welcome to the Canadian Airlines_______________\n"<<endl;

                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;

                cout<<"Following are the flights \n"<<endl;

                cout<<"1.CA - 112"<<endl;
                cout<<"\t06-06-2023 6:00AM 22hrs Rs. 25000"<<endl;
                cout<<"2.CA - 339"<<endl;
                cout<<"\t07-06-2023 2:00AM 21hrs Rs. 30000"<<endl;
                cout<<"3.CA - 877"<<endl;
                cout<<"\t10-06-2023 10:00AM 22hrs Rs. 40000"<<endl;

                cout<<"\nSelect the flight you want to book : ";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=25000;
                    cout<<"\n You have successfully booked the flight CA - 112"<<endl;
                    cout<<"You can go back to the menu and take the ticket"<<endl;
                }

                else if(choice1==2)
                    {
                    charges=30000;
                    cout<<"\n You have successfully booked the flight CA - 339"<<endl;
                    cout<<"You can go back to the menu and take the ticket"<<endl;
                }
                else if(choice1==3)
                    {
                    charges=40000;
                    cout<<"\n You have successfully booked the flight DUB - 877"<<endl;
                    cout<<"You can go back to the menu and take the ticket"<<endl;
                }
                else{
                    cout<<"Invalid input, shifting to the previous menu"<<endl;
                    flight();
                }

                cout<<"press any key to go back to the main menu:"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();

                }
                else
                {
                    mainMenu();


                }
                break;


            }
        case 3:
             {
                cout<<"___________________Welcome to the UK Airways________________\n"<<endl;

                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;

                cout<<"Following are the flights \n"<<endl;

                cout<<"1.UK - 001"<<endl;
                cout<<"\t02-06-2023 7:00AM 16hrs Rs. 46000"<<endl;


                cout<<"\nSelect the flight you want to book : ";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=46000;
                    cout<<"\n You have successfully booked the flight UK - 001"<<endl;
                    cout<<"You can go back to the menu and take the ticket"<<endl;
                }

                else{
                    cout<<"Invalid input, shifting to the previous menu"<<endl;
                    flight();
                }

                cout<<"press any key to go back to the main menu:"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();

                }
                else
                {
                    mainMenu();


                }
                break;


            }
        case 4:
             {
                cout<<"___________________Welcome to the US Airways________________\n"<<endl;

                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;

                cout<<"Following are the flights \n"<<endl;

                cout<<"1.USA - 888"<<endl;
                cout<<"\t01-06-2023 8:00AM 26hrs Rs. 45000"<<endl;
                cout<<"2.USA - 899"<<endl;
                cout<<"\t09-06-2023 4:00AM 24hrs Rs. 50000"<<endl;
                cout<<"3.USA - 332"<<endl;
                cout<<"\t12-06-2023 11:00AM 24hrs Rs. 50000"<<endl;

                cout<<"\nSelect the flight you want to book : ";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=45000;
                    cout<<"\n You have successfully booked the flight USA - 888"<<endl;
                    cout<<"You can go back to the menu and take the ticket"<<endl;
                }

                else if(choice1==2)
                    {
                    charges=50000;
                    cout<<"\n You have successfully booked the flight USA - 899"<<endl;
                    cout<<"You can go back to the menu and take the ticket"<<endl;
                }
                else if(choice1==3)
                    {
                    charges=50000;
                    cout<<"\n You have successfully booked the flight USA - 332"<<endl;
                    cout<<"You can go back to the menu and take the ticket"<<endl;
                }
                else{
                    cout<<"Invalid input, shifting to the previous menu"<<endl;
                    flight();
                }

                cout<<"press any key to go back to the main menu:"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
                break;
            }
        case 5:
             {
                cout<<"___________________Welcome to the Australian Airlines________________\n"<<endl;

                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;

                cout<<"Following are the flights \n"<<endl;

                cout<<"1.AUS - 001"<<endl;
                cout<<"\t08-06-2023 8:00AM 20hrs Rs. 26000"<<endl;
                cout<<"2.AUS - 002"<<endl;
                cout<<"\t09-06-2023 4:00AM 18hrs Rs. 30000"<<endl;


                cout<<"\nSelect the flight you want to book : ";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=26000;
                    cout<<"\n You have successfully booked the flight AUS - 001"<<endl;
                    cout<<"You can go back to the menu and take the ticket"<<endl;
                }

                else if(choice1==2)
                    {
                    charges=30000;
                    cout<<"\n You have successfully booked the flight AUS - 002"<<endl;
                    cout<<"You can go back to the menu and take the ticket"<<endl;
                }

                else{
                    cout<<"Invalid input, shifting to the previous menu"<<endl;
                    flight();
                }

                cout<<"press any key to go back to the main menu:"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
                break;
            }
        case 6:
             {
                cout<<"___________________Welcome to the European Airways________________\n"<<endl;

                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;

                cout<<"Following are the flights \n"<<endl;

                cout<<"1.EU - 7777"<<endl;
                cout<<"\t02-06-2023 8:00AM 23hrs Rs. 38000"<<endl;
                cout<<"2.EU - 2288"<<endl;
                cout<<"\t09-06-2023 4:00AM 21hrs Rs. 45000"<<endl;
                cout<<"3.EU - 2003"<<endl;
                cout<<"\t11-06-2023 11:00AM 23hrs Rs. 42000"<<endl;

                cout<<"\nSelect the flight you want to book : ";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=38000;
                    cout<<"\n You have successfully booked the flight EU - 7777"<<endl;
                    cout<<"You can go back to the menu and take the ticket"<<endl;
                }

                else if(choice1==2)
                    {
                    charges=45000;
                    cout<<"\n You have successfully booked the flight EU - 2288"<<endl;
                    cout<<"You can go back to the menu and take the ticket"<<endl;
                }
                else if(choice1==3)
                    {
                    charges=42000;
                    cout<<"\n You have successfully booked the flight EU - 2003"<<endl;
                    cout<<"You can go back to the menu and take the ticket"<<endl;
                }
                else{
                    cout<<"Invalid input, shifting to the previous menu"<<endl;
                    flight();
                }

                cout<<"press any key to go back to the main menu:"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
                break;
            }
        default:
            {
                cout<<"Invalid input, Shifting you to the main menu!"<<endl;
                mainMenu();
                break;
            }

        }
    }
};

float Registration::charges;
int Registration::choice;

class Ticket : public Registration, Details
{
public:

    void Bill()
    {
       string destination="";
       ofstream outf("records.txt");
       {
           outf<<"__________Airrow Airlines________"<<endl;
           outf<<"_____________Ticket______________"<<endl;
           outf<<"_________________________________"<<endl;

           outf<<"Customer ID:"<<Details::cId<<endl;
           outf<<"Customer Name:"<<Details::name<<endl;
           outf<<"Customer Gender:"<<Details::gender<<endl;
           outf<<"\tDescription"<<endl<<endl;

           if(Registration::choice==1)
           {
               destination="Dubai";
           }
           else if(Registration::choice==2)
           {
               destination="Canada";
           }
           else if(Registration::choice==3)
           {
               destination="UK";
           }
           else if(Registration::choice==4)
           {
               destination="USA";
           }
           else if(Registration::choice==5)
           {
               destination="Australia";
           }
           else if(Registration::choice==6)
           {
               destination="Europe";
           }

           outf<<"Destination\t\t"<<destination<<endl;
           outf<<"Flight cost : \t\t"<<Registration::charges<<endl;
       }
       outf.close();
    }

    void dispBill()
    {
        ifstream ifs("records.txt");
        {
            if(!ifs)
            {
                cout<<"File Error"<<endl;
            }
            while(!ifs.eof())
            {
                ifs.getline(arr,100);
                cout<<arr<<endl;
            }
        }
        ifs.close();
    }
};

void mainMenu()
{
    int lchoice;
    int back;

    cout<<"\t              Airrow Airlines       \n"<<endl;
    cout<<"\t______________Main Menu_______________________________"<<endl;

    cout<<"\t______________________________________________________"<<endl;
    cout<<"\t|                                                    |"<<endl;

    cout<<"\t| Press 1 to add the Customer Details                |"<<endl;
    cout<<"\t| Press 2 for Flight Registration                    |"<<endl;
    cout<<"\t| Press 3 for Ticket and Charges                     |"<<endl;
    cout<<"\t| Press 4 to Exit                                    |"<<endl;
    cout<<"\t|                                                    |" <<endl;
    cout<<"\t|_____________________________________________________"<<endl;

    cout<<"Enter the choice : ";
    cin>>lchoice;

    Details d;
    Registration r;
    Ticket t;

    switch(lchoice)
    {
    case 1:
        {
            cout<<"________Customers__________\n"<<endl;
            d.information();
            cout<<"Press any key to go back to the Main Menu";
            cin>>back;

            if(back == 1)
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
            cout<<"_______Book a Flight using this system__________\n"<<endl;
            r.flight();
            break;
        }

    case 3:
        {
            cout<<"______GET YOUR TICKET_______\n"<<endl;
            t.Bill();

            cout<<"Your ticket is printed, You can collect it \n"<<endl;
            cout<<"Press 1 to display your ticket ";

            cin>>back;

            if(back == 1)
            {
                t.dispBill();
                cout<<"Press any key to go back to Main Menu:";
                cin>>back;
                if(back==1)
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
            cout<<"\n\n\t_________Thank-you__________"<<endl;
            break;
        }
    default :
        {
            cout<<"Invalid Input, Please try again!\n"<<endl;
            mainMenu();
            break;
        }
    }
}

int main()
{
    Management Mobj;
    return 0;
}
