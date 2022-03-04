#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> g1;
	for(int i=0;i<5;i++)
	{
		g1.push_back(i);
	}
	cout<<"ITERATORS:";
	cout<<endl;
	cout<<"Output of begin and end:";
	for(auto i=g1.begin();i!=g1.end();i++)
	{
		cout<<*i<<" ";
	}
	cout<<endl;
	cout<<"Output of cbegin and cend:";
	for(auto i=g1.cbegin();i!=g1.cend();i++)
	{
		cout<<*i<<" ";
	}
	cout<<endl;
	cout<<"Output of rbegin and rend:";
	for(auto i=g1.rbegin();i!=g1.rend();i++)
	{
		cout<<*i<<" ";
	}
	cout<<endl;
	cout<<"Output of crbegin and crend:";
	for(auto i=g1.crbegin();i!=g1.crend();i++)
	{
		cout<<*i<<" ";
	}
	cout<<endl;
	cout<<endl;
	cout<<"CAPACITY:";
	cout<<endl;
	cout<<"Size:"<<g1.size();
	cout<<endl;
	cout<<"Max Size:"<<g1.max_size();
	cout<<endl;
	cout<<"Capacity:"<<g1.capacity();
	cout<<endl;
	cout<<"Is empty?:"<<g1.empty();
	cout<<endl;
	cout<<"Resize:";
	g1.resize(3);
	for(auto i=g1.begin();i!=g1.end();i++)
	{
		cout<<*i<<" ";
	}
	cout<<endl;
	cout<<"Shrink to fit:";
	g1.shrink_to_fit();
	for(auto i=g1.begin();i<g1.end();i++)
	{
		cout<<*i<<" ";
	}
	cout<<endl;
	cout<<endl;
	cout<<"ELEMENT ACCESS:";
	cout<<endl;
	cout<<"Reference Operator:"<<g1[2];
	cout<<endl;
	cout<<"At:"<<g1.at(1);
	cout<<endl;
	cout<<"Front:"<<g1.front();
	cout<<endl;
	cout<<"Back:"<<g1.back();
	cout<<endl;
	cout<<"Front:"<<g1.front();
	cout<<endl;
	cout<<"Data:";
	int *pos = g1.data();
	cout<<*pos;
	cout<<endl;
	cout<<endl;
	cout<<"MODIFIERS:";
	cout<<endl;
	cout<<"Assign:";
	g1.assign(4,10);
	for(auto i=g1.begin();i<g1.end();i++)
	{
		cout<<*i<<" ";
	}
	cout<<endl;
	cout<<"Push Back:";
	g1.push_back(20);
	for(auto i=g1.begin();i<g1.end();i++)
	{
		cout<<*i<<" ";
	}
	cout<<endl;
	cout<<"Pop Back:";
	g1.pop_back();
	for(auto i=g1.begin();i<g1.end();i++)
	{
		cout<<*i<<" ";
	}
	cout<<endl;
	cout<<"Insert:";
	g1.insert(g1.begin(),5);
	for(auto i=g1.begin();i<g1.end();i++)
	{
		cout<<*i<<" ";
	}
	cout<<endl;
	cout<<"Erase:";
	g1.erase(g1.begin());
	for(auto i=g1.begin();i<g1.end();i++)
	{
		cout<<*i<<" ";
	}
	cout<<endl;
	cout<<"Emplace:";
	g1.emplace(g1.begin(),8);
	for(auto i=g1.begin();i<g1.end();i++)
	{
		cout<<*i<<" ";
	}
	cout<<endl;
	cout<<"Emplace Back:";
	g1.emplace_back(18);
	for(auto i=g1.begin();i<g1.end();i++)
	{
		cout<<*i<<" ";
	}
	cout<<endl;
	cout<<"Clear:";
	g1.clear();
	for(auto i=g1.begin();i<g1.end();i++)
	{
		cout<<*i<<" ";
	}
	
	
	vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);
  
    cout << "\n\nVector 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
  
    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
  
    v1.swap(v2);
  
    cout << "\nAfter Swap \nVector 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
  
    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";

	
	
	return 0;
}
