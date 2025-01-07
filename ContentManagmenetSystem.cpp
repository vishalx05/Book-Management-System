#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include<conio.h>



class contactManagement{
    map<string,string> contact;

    public:
    void add(string phone,string name){
        if(contact.find(phone)!=contact.end()){
                cout << "A contact with phone number \"" << phone << "\" already exists.\n";
        } else {

            contact[phone]=name;
            cout<<"Phone number added successfull";

        }

    }

    void search(string phone){
        auto it=contact.find(phone);
        if(it!=contact.end()){
                 cout << "Phone: " << it->first << ", Name: " << it->second << "\n";
        }else{
            cout<<"NO Found"<<endl;

        }
    }
    void display(){
        if(contact.empty()){
            cout << "No contacts available.\n";
            return;
        }else{
            for (const auto& pair : contact) {
                cout << "Phone: " << pair.first << ", Name: " << pair.second << "\n";
        }
        }
    }

    void Delete(string phone){
        if(contact.erase(phone)){
             cout << "Contact with phone number \"" << phone << "\" deleted successfully.\n";
        }else{
            cout << "No contact found with phone number "<< phone << "\n";
        }

    }
};

int main(){
    contactManagement manager;
 p:
    system("cls");
    int choice;
    

            cout << "\n--- Contact Management System ---\n";
        cout << "1. Add Contact\n";
        cout << "2. Search Contact\n";
        cout << "3. Display All Contacts\n";
        cout << "4. Delete Contact\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        string phone, name;
        cin.ignore(); // Clear input buffer for getline to work properly
     switch (choice){

        case 1:
            cout<<"ENTER THE PHONE NUMBER \n";
            getline(cin,phone);
            cout<<"ENTER THE NAME \n";
            getline(cin,name);
            manager.add(phone,name);
            break;

        case 2:


            cout<<"ENTER THE PHONE NUMBER \n";
            getline(cin,phone);
            manager.search(phone);
            break;

        case 3:

            manager.display();
            break;

        case 4:
         cout<<"ENTER THE PHONE NUMBER \n";


            getline(cin,phone);
            manager.Delete(phone);

            break;
         case 5:
            cout << "Exiting Contact Management System.\n";
            exit(0);

        default:
            cout << "Invalid choice. Please try again.\n";

    }
    getch();
    goto p;


}