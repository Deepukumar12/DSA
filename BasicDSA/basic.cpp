
//basic skeleton

// #include <bits/stdc++.h>
// // #include <iostream>

// using namespace std;

// int main()
// {
//     cout<<"Hello Bhole";
//     return 0;
// }





#include <bits/stdc++.h>
// // #include <iostream>
using namespace std;

int main()
{
    //data-type
    int numInt = INT_MAX; // range [-10^9 , 10^9]
    cout<<numInt<<endl;

    long num  = 100000; 
    cout<<num<<endl;

    // 10^18
    long long numLong = 1000000000000;
    cout<<numLong<<endl;

    float numFloat = 3.14f; // 6-7 digit precision
    cout<<numFloat<<endl;

    double numDouble = 3.141592653589793; // 15-16 digit precision
    cout<<numDouble<<endl;

    char ch = 'A';
    cout<<ch<<endl;

    string str = "Hello Bhole";
    cout<<str<<endl;

    bool isTrue = true;
    cout<<isTrue<<endl;


//input-output
int a;
cin>>a;
cout<<a<<endl;

string name;
cin>>name;
cout<<name<<endl;

string s;
getline(cin, s);
cout<<s<<endl;



//if-else
//  given an age print "adult" if age>=18 else print "minor or teenager"

int age;
cin>>age;

if(age>=18){
    cout<<"adult"<<endl;
}
else{
    cout<<"minor or teenager"<<endl;
}



    return 0;
}







//for loop
//while loop
//switch case
//arrays
//strings
//functions
//pass by value and pass by reference