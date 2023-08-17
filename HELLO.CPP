#include <iostream>
#include<string>
#include <cmath>
using namespace std;

int main() {
  /*cout << "Hello World!"<<endl;
  cout<< "i am learning c++"<<endl;
  int num=14;
  float f=1;
  double d=1;
  char c = 'a';
  string s="Hello World";
  bool b=true;
  cout<<num<<endl<<f<<endl<<d<<endl<<c<<endl<<s<<endl<<b<<endl;
  int x=1,y=9,z=89;
  cout<<x+y+z<<endl;

  int x ;
  cout<<"give data";
  cin>>x;
  cout<<x;

float f1 = 35e3;
double d1 = 12E4;
cout << f1<<"\n";
cout << d1; 
string greeting = "Hello";
cout << greeting;
string firstName = "John ";
string lastName = "Doe";
string fullName = firstName.append(lastName);
cout << fullName;
string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << "The length of the txt string is: " << txt.length()<<endl;
cout << "The length of the txt string is: " << txt.size();  

string myString = "Hello";
cout << myString[1];

string myString = "Hello";
myString[0] = 'J';
cout << myString;

string txt = "We are the so-called \"Vikings\" from the north.";
cout<<txt;

string fullName;
cout << "Type your full name: ";
getline (cin, fullName);
cout << "Your name is: " << fullName;

cout << sqrt(64)<<endl;
cout << round(2.6)<<endl;
cout << log(2)<<endl;

cout << (10 > 9);



int myAge = 25;
int votingAge = 18;

if (myAge >= votingAge) {
  cout << "Old enough to vote!";
} else {
  cout << "Not old enough to vote.";
}
int time = 12;
string result = (time < 18) ? "Good day." : "Good evening.";
cout << result;

int day = 4;
switch (day) {
  case 6:
    cout << "Today is Saturday";
    break;
  case 7:
    cout << "Today is Sunday";
    break;
  default:
    cout << "Looking forward to the Weekend";
    }
   int i = 0;
while (i < 5) {
  cout << i << "\n";
  ++i;
}
for (int i = 0; i < 10; i++) {
  cout << i << "\n";
}
int myNumbers[5] = {10, 20, 35, 40, 50};

for( int i=0 ;i<5; i++)
{
cout<<myNumbers[i]<<endl;
}


for (int i = 0; i < 10; i++) {
  if (i == 4) {
    continue;
  }
  cout << i << "\n";
}

int myNumbers[5] = {10, 20, 30, 40, 50};
for (int i : myNumbers) {
  cout << i << "\n";
}

string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
cars[0] = "Opel";
for(int i=0;i< 4; i++)
{
  cout<<cars[i]<<endl;
}

int myNumbers[5] = {10, 20, 30, 40, 50};
cout << sizeof(myNumbers);


int myNumbers[5] = {10, 20, 30, 40, 50};
int getArrayLength = sizeof(myNumbers) / sizeof(int);
cout << getArrayLength;

int myNumbers[5] = {10, 20, 30, 40, 50};
for (int i = 0; i < sizeof(myNumbers) / sizeof(int); i++) {
  cout << myNumbers[i] << "\n";
  }

string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};

for (int i = 0; i < 2; i++) {
  cout<<endl;
  for (int j = 0; j < 4; j++) {
    cout << letters[i][j]<<"\0" ;
  }
}
*/

string letters[2][2][2] = {
  {
    { "A", "B" },
    { "C", "D" }
  },
  {
    { "E", "F" },
    { "G", "H" }
  }
};

for (int i = 0; i < 2; i++) {
  for (int j = 0; j < 2; j++) {
    for (int k = 0; k < 2; k++) {
      cout << letters[i][j][k] << "\n";
    }
  }
}

}


