#include<iostream>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
	ifstream inFile("file.in",ios::in);
	if(!inFile)
	{
		cerr<<"Falied opening file in"<<endl;
		exit(1);
	}
	
	ofstream outFile("stdout",ios::out);
	if(!outFile)
	{
		cerr<<"Falied opening file out"<<endl;
		exit(1);
	}
	
	int number;
//	vector<int>cow(number);
	while(inFile>>number)
	{

		vector<int>cow(number);
		
		for(int i=0;i<number;i++)
		{
			inFile>>cow.at(i); 
		}

		for(int next=1;next<number;++next)
		{
			int moveltem=next;
			int insert=cow.at(next);
			while((moveltem>0)&&(cow.at(moveltem-1)>insert))
			{
				cow.at(moveltem)=cow.at(moveltem-1);
				--moveltem;
			}
		
			cow.at(moveltem)=insert;
		}	
		
		/*for(int i=0;i<number;++i)
		{
			cout<<cow.at(i);
		}*/

		int total=0;
		for(int i=number-1;i>number-6;i--)
		{
			total=total+cow.at(i);
		}

		outFile<<total;

	}	
		
		
	

}
