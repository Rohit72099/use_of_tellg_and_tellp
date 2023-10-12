//use of tellg() and tellp()
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
fstream obj1;
obj1.open("file1.txt",ios::out);
obj1<<"welcome to all";
cout<<obj1.tellp();
obj1.close();
obj1.open("file1.txt",ios::in);
cout<<endl<<obj1.tellg();
obj1.close();
return 0;
}
