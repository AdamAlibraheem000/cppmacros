#include<iostream>
#include<string>
#include<vector>
#include<limits>
#include<cstdlib>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void menu();

void saveToDisk();
void loadFromDisk();
void manualEntry();
void predefined();
void clearData();


int main(){

    menu();    
    return 0;
}

void menu(){
    string userInput = "";
    

    while (true)
    {
        cout << "1)Predefined\n";
        cout << "2)Manual Entry\n";
        cout << "3)Clear Data\n";
        cout << "4)Exit Program\n";
        cout << ">> ";
        cin >> userInput;
        
        if(userInput == "1"){
            predefined();
            break;
        }else if(userInput == "2"){
            manualEntry();
            break;
        }else if(userInput == "3"){
            clearData();
            break;
        }else if(userInput == "4"){
            cout << "Buh bye\n";
            exit(0);
            break;
        }else if(userInput == "5"){
            cout << "five";
            break;
        }else{
            cout << "Wrong input. Try again\n\n";
            std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        }
    }
    
}

void predefined(){
    cout << "predefined";
}

void manualEntry(){
    cout << "manual entry";
}

void clearData(){
    cout << "clear data";
}

void saveToDisk(){
    cout << "save";
}

void loadFromDisk(){
    cout << "Load from disk";
}