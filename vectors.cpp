#include<iostream>
#include<vector>
using namespace std;

int main()
{
/*	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	cout<<v[0]<<endl;
	cout<<v[1]<<endl;
	
	cout<<"Size : " << v.size();
	cout<<endl<<v.at(2);
	v.push_back(40);
	v.push_back(50);
	cout<<endl<<"Size : " << v.size();
*/

	vector<int> v1;
	for(int i=0;i<100;i++)
	{
		cout<<"Capcaity: " <<v1.capacity() << endl;
		cout<<"Size: " <<v1.size() << endl;
		v1.push_back(100);
	}


}
