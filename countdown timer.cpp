#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;

int main()
{
	int m,s;
	int total;



	cout<<"Enter minutes and seconds"<<endl;

	cin>>m>>s;


         cout<<"Time starts Now! \n";
		for(int sec = s; s>=0; s--)
		{
			cout<<"You have "<<"minutes "<<m<<" seconds "<<s<<endl;
			Sleep(200);

			if(s ==0)
			{
             total = m*60;

			 for(int min = total; total>=0; total--)
			 {
		 cout<<"You have the remaining seconds"<<total<<endl;
				 Sleep(200);
			 }



			}
		}





	 system("pause");


}
