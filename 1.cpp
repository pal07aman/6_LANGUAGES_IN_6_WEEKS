#include<iostream>
#include<thread>

using namespace std;

void func(int n) // function to determine the no. of iterations
{
	int count=0;int i=n;
	while(i>0) // counting the number of iterations
	{
		std::this_thread::sleep_for(1000ms); // setting 1 second sleep time
		count++;
		i--;
	}
	cout<<count<<endl; //printing the no. of iterations
}
int main()
{
	int x;
	cout<<"Enter any numerical value : "<<endl;
	cin>>x;
	std::thread th(func,x);
	th.join(); //joining of thread

	return 0;
}