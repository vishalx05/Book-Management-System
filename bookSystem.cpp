#include<bits/stdc++.h>
using namespace std;
#include<conio.h>
int ascii=178,i=0;
char ch=ascii;

struct bookshop{
    int id;
    string name,a_name,p_name;
    float price;

}B[25];
//heading
void heading(){
   cout<<"\n ";
    for(int m=0;m<=26;m++){
        cout<<ch;

    }
    cout<<" Book Shop Project in C++ ";
    for(int m=0;m<=26;m++){
        cout<<ch;

    }
}
//insert new book
void insert(){
    system("cls");
    heading();
    cout<<"\n\n ENTER BOOK ID ->";
    cin>>B[i].id;
     cout<<"\n\n ENTER BOOK name ->";
    cin>>B[i].name;

     cout<<"\n\n ENTER BOOK AUTHOR NAME ->";
    cin>>B[i].a_name;

     cout<<"\n\n ENTER BOOK PUBLISHER NAME ->";
    cin>>B[i].p_name;
     cout<<"\n\n ENTER BOOK PRICE ->";
    cin>>B[i].price;
    i++;
    cout<<"\n\n\n "<<ch<<ch<<" INSERT BOOK SUCCESSFULLY "<<ch<<ch;
}
void search(){
    system("cls");
    heading();
    if(i==0){
        cout<<ch<<ch<<"\n\n NO BOOK AVAILABLE "<<ch<<ch;
    }
    else{
        int t_id,found=0;

        cout<<ch<<ch<<" ENTER THE BOOK ID "<<ch<<ch;
        cin>>t_id;
        for(int a=0;a<=i;a++){
            if(t_id==B[a].id){
                cout<<"\n\n BOOK NAME ->"<<B[a].name;
                cout<<"\n\n BOOK AUTHOR ->"<<B[a].a_name;
                cout<<"\n\n BOOK PUBLIHER ->"<<B[a].p_name;
                cout<<"\n\n BOOK PRICE ->"<<B[a].price;
                found=1;
                break;
            }
        }
        if(found==0){
              cout<<"\n\n\n "<<ch<<ch<<" BOOK ID NOT FOUND "<<ch<<ch;


        }
    }

}
void update(){
    system("cls");
    heading();
    if(i==0){
        cout<<ch<<ch<<"\n\n NO BOOK AVAILABLE "<<ch<<ch;
    }
    else{
        int t_id,found=0;

        cout<<ch<<ch<<" ENTER THE BOOK ID FOR UPDATE -> "<<ch<<ch;
        cin>>t_id;
        for(int a=0;a<=i;a++){
            if(t_id==B[a].id){

                cout<<"\n\n ENTER BOOK name ->";
                cin>>B[a].name;

                cout<<"\n\n ENTER BOOK AUTHOR NAME ->";
                cin>>B[a].a_name;

                cout<<"\n\n ENTER BOOK PUBLISHER NAME ->";
                cin>>B[a].p_name;
                cout<<"\n\n ENTER BOOK PRICE ->";
                cin>>B[a].price;
              cout<<"\n\n\n "<<ch<<ch<<" UPDATE BOOK SUCCESSFULLY "<<ch<<ch;


                found=1;
                break;
            }
        }
        if(found==0){
              cout<<"\n\n\n "<<ch<<ch<<" BOOK ID NOT FOUND "<<ch<<ch;


        }
    }

}
void Delete() {
    system("cls");
    heading();
    if (i == 0) {
        cout << ch << ch << " \n\n NO BOOK AVAILABLE " << ch << ch;
    } else {
        int t_id, found = 0;

        cout << ch << ch << " ENTER THE BOOK ID FOR DELETE-> " << ch << ch;
        cin >> t_id;
        for (int a = 0; a < i; a++) { // Corrected condition to 'a < i'
            if (t_id == B[a].id) {
                // Shift all elements one position up
                for (int k = a; k < i - 1; k++) {
                    B[k] = B[k + 1];
                }
                cout << "\n\n\n " << ch << ch << " DELETE BOOK SUCCESSFULLY " << ch << ch;

                i--; // Decrease the count of books
                found = 1;
                break;
            }
        }
        if (found == 0) {
            cout << "\n\n\n " << ch << ch << " BOOK ID NOT FOUND " << ch << ch;
        }
    }
}

void showall(){
    system("cls");
    heading();
    if(i==0){
        cout<<ch<<ch<<"\n\n NO BOOK AVAILABLE "<<ch<<ch;
    }
    else{

        for(int a=0;a<i;a++){
               cout<<"\n\n BOOK ID ->"<<B[a].id;

               cout<<"\n\n BOOK NAME ->"<<B[a].name;
                cout<<"\n\n BOOK AUTHOR ->"<<B[a].a_name;
                cout<<"\n\n BOOK PUBLIHER ->"<<B[a].p_name;
                cout<<"\n\n BOOK PRICE ->"<<B[a].price<<"\n\n";


        }

    }

}
void sortName(){


    system("cls");
    heading();
    if(i==0){
        cout<<ch<<ch<<"\n\n NO BOOK AVAILABLE "<<ch<<ch;
    }

    else{
         for (int pass = 0; pass < i - 1; pass++) {
            for (int j = 0; j < i - pass - 1; j++) {
                if (B[j].name > B[j + 1].name) {
                    swap(B[j], B[j + 1]);
                }
            }
        }
        cout << "\n\n\n " << ch << ch << " BOOKS SORTED BY NAME SUCCESSFULLY " << ch << ch;
    }

}

int main()
{
    p:
    system("cls");

    int choice;
        heading();


        cout<<"\n\n"<<ch<<ch<<" 1.ADD BOOK ";
        cout<<"\n\n"<<ch<<ch<<" 2.SEARCH BOOK ";
        cout<<"\n\n"<<ch<<ch<<" 3.UPDATE BOOK ";
        cout<<"\n\n"<<ch<<ch<<" 4.DELETE BOOK ";
        cout<<"\n\n"<<ch<<ch<<" 5.SHOW ALL BOOK ";
        cout<<"\n\n"<<ch<<ch<<" 6.SORT BY NAME BOOK ";

        cout<<"\n\n"<<ch<<ch<<" 7.EXIT \n\n ";

        cout<<ch<<ch<<" ENTER YOUR CHOICE -> ";
        cin>>choice;
        switch(choice){
            case 1:
                insert();

                break;

            case 2:
                search();

                break;
            case 3:
                update();

                break;
            case 4:
                Delete();

                break;
            case 5:
                showall();

                break;
            case 6:
                 sortName();
                 showall();
                 
                 break;

            case 7:
                  exit(0);

            default:
                cout<<"\n\n "<<ch<<ch<<" PLEASE SELECT CORRECT OPTION "<<ch<<ch;



        }
            getch();

                goto p;
}