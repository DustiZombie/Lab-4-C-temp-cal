//GeekforGeeks, aunt ginger, 
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

void print_Line(int X) {
  
    int LOL;
    int numOfStars = X / 3;
    int numOfSpace = numOfStars + 10;
   string MaxStars = "****************************************";
   string MaxSpace = "          ";
    string barStars = MaxStars.substr(1, numOfStars);
    string Star = "*";
   

    
  


       
   
        

    //Your print_line function should create a 
    // line like this 
    // "----------    | ----------------------------------------"
   //bar spaces, barstar, X , pipe or | , number of stars 
   // -10 = **********|   , 120 = |40x'*' ( 
    cout << X<<setw(15)<<'|'<<'\n';
}
    //Cout<<negive space<<negive starts

//    -30          0

int main() {
   string line;
    ifstream myfile("temp.txt");
    if (myfile.is_open())
    {
        cout << "    -30          0          30           60          90          120"<<'\n';
        while (getline(myfile, line))
        {
            int num = std::stoi(line);
            print_Line(num);
        }
        myfile.close();
    }

    else cout << "Unable to open file";

    return 0;
}
