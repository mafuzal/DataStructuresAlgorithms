// Arrays: Two Number Sum 
//C++ V1	
//Here an array of distinct integers are eneterd 
//Within the array, two numbers are summed to check if they 
//add up to targetNum 
#include <vector>
#include<iostream>
using namespace std;


vector<int> twoNumberSum(vector<int> array, int targetSum);

int main()
{

	vector <int> dataArray1 = {11, 9, 20, 30,15,25 };
	vector <int> result = twoNumberSum(dataArray1,20);
	cout<<"Size of result: "<<result.size()<<endl;

	vector <int> dataArray2 = {11, 9, 20, 30, 15, 25};
	result = twoNumberSum(dataArray2,30);
	cout<<"Size of result: "<<result.size()<<endl;

	vector <int> dataArray3 = {-1, -9, 5, 30, 88, 25};
	result = twoNumberSum(dataArray3,-10);
	cout<<"Size of result: "<<result.size()<<endl;
	
	return 0;

}

vector<int> twoNumberSum(vector<int> array, int targetSum) 
{
	for(int i = 0; i <array.size()-1;i++)
	{
		for(int j = i+1; j <array.size();j++)
		{
			if(array.at(i)+ array.at(j) == targetSum)
				return vector<int> {array.at(i), array.at(j)};
		}

	}
	return {};
}
