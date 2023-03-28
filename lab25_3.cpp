#include<iostream>
#include<set>
using namespace std;

int count(int data[1000],int size)
{
	set <int> uniqueData;
	for (int i=0;i<size;i++)
	{
		uniqueData.insert(data[i]);
	}
	return uniqueData.size();
}
