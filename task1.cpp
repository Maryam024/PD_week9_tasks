#include<iostream>
#include<string>
using namespace std;

string isLengthEven(string word)
{   
    int m = word.length();
    if ( m % 2 == 0 )
    {
        return "true" ;
    }
    else
    {
        return "false";
    }
}


main()
{
    string word;
    cout<<"Enter a string: ";
    cin>>word;
   
     cout<< isLengthEven(word);
    

}