
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
int a1;
cin>>a1;
cout<<a1<<endl;

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


// given the marks of a student, print the grade as per the following criteria
// marks>=90 -> grade =  A
// marks>=70 and <90 -> grade = B
// marks>=50 and <70 -> grade = C
// marks>=35 and <50 -> grade = D
// marks<35 -> F

int marks;
cin>>marks;

if(marks>=90)
{
    cout<<"Grade A"<<endl;
}
else if(marks<90 && marks>= 70)
{
    cout<<"Grade B"<<endl;
}
else if(marks<70 && marks>=50)
{
    cout<<"Grade C"<<endl;
}
else if(marks<50 && marks>=50)
{
    cout<<"Grade D"<<endl;
}
else
{
    cout<<"Fail"<<endl;
}





// nested if-else 
// you are given three integers a,b and c, print which of these integers is the largest. If two or more integers are equal and are the largest, the program should indicate that as well.

int a,b,c;
cin>>a>>b>>c;

if(a>b && a>c)
{
    cout<<" A is Largest = "<<a<<endl;
}
else if(b>a && b>c)
{
    cout<<"B is Largest "<<b<<endl;
}
else if(c>a && c>b)
{
    cout<<"C is Largest = "<<c<<endl;
}
else if(a==b || a==c)
{
    cout<<a<<endl;
}
else if(b==a || b==c)
{
    cout<<b<<endl;
}
else if(c==a || c==b)
{
    cout<<c<<endl;
}

    




//switch case

// given the day number print which day it is of the week, assume week starts from Monday and ends on Sunday

int day;
cin>>day;

switch(day)
{

    case 1:
    cout<<"Monday"<<endl;
    break;

    case 2:
    cout<<"Tuesday"<<endl;
    break;
    
    case 3:
    cout<<"Wednesday"<<endl;
    break;

    case 4:
    cout<<"Thursday"<<endl;
    break;

    case 5:
    cout<<"Friday"<<endl;
    break;

    case 6:
    cout<<"Saturday"<<endl;
    break;

    case 7:
    cout<<"Sunday"<<endl;
    break;

    default:
    cout<<"Day is invalid"<<endl;
}




//for loop
// take input of 10 numbers and print it 

for(int i1=1;i1<=10;i1++)
{
    cout<<i1<<endl;
}




//while loop
int i2=5;
while(i2<=50)
{
    cout<<i2<<endl;
    i2 = i2 + 5;
}



// do-while

int it = 10;
do{
    cout<<it<<endl;
    it = it + 10;
}while(it<=100);



//arrays
int arr[5];
cout<<arr[5]<<endl;



//strings
string ss = "bholenath";
cout<<ss<<endl;

int lenght = ss.size();
cout<<lenght<<endl;
for(int i=0;i<lenght;i++)
{
    cout<<ss[i]<<endl;
 return 0;
}





 
//functions

// void print()
// {
//     cout<<"bhole"<<endl;
// }
// int main()
//     {
//         print();
//         return 0;
//     }

//pass by value and pass by reference