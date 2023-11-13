#include<iostream>
using namespace std;

string containsSeven(int numbers[], int size)
{
  for (int i=0; i<size; i++ )
  {
      while(numbers[i] != 0)
      {
        if ( numbers[i] % 10 == 7)
        {
            return "Boom!";
        }
        numbers[i]= numbers[i] /10;
      }
  }
    return "there is no 7 in the array"; 
    
}
main()
{
  int size;
  cout<<"Enter the size of Array: ";
  cin>>size;
  int numbers[size];

  for(int count=0; count<size; count++)
  {
    cout<<"Enter Element "<<count+1<<": ";
    cin>>numbers[count];
  }

  cout<<containsSeven( numbers, size);

}