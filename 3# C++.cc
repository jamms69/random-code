#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout <<" please enter three different numbers: \n";
	cin>>a>>b>>c;
	
	if (a>b)
	      if (a>c)
	             cout<<a<<" is the largest number";
	     else cout<<c<<" is the largest number";
	      
    if (b>a)
	      if (b>c)
	           cout<<b<<" is the largest number";
	    else cout<<c<<" is the largest number";
	    
	 if (a==b) 
	          if (b==c)
	          cout<<"all the numbers are equal";
	          
	          
	
	}