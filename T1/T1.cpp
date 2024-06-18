//#include<iostream>
//#include<iomanip>
//#include<List>
//using namespace std;
//int main()
//{
//	int Group;
//	cin >> Group;
//	for (int k = 0; k < Group; k++)
//	{
//		int num;
//		cin >> num;
//		list<int> points;
//		for (int i = 0; i < num; i++)
//		{
//			int n;
//			cin >> n;
//			points.push_back(n);
//		}
//		points.sort();
//		int startPoint;
//		list<int>::iterator a = points.begin();
//		if (points.size() % 2 == 0)
//		{
//			for (int j = 0; j < points.size() % 2;j++)
//			{
//				a++;
//			}
//			startPoint = *a;
//			a++;
//			startPoint += *a;
//			startPoint /= 2;
//		}
//		else
//		{
//			for (int i = 0; i <= (points.size() + 1) % 2; i++)
//			{
//				a++;
//			}
//			startPoint = *a;
//		}
//		int sumStep=0;
//		for (a=points.begin();a!=points.end();a++)
//		{
//			sumStep += abs(startPoint - *a);
//		}
//		cout << sumStep << endl;
//	}
//}



#include<iostream>
#include<vector>
#include <string>
using namespace std;
int main()
{
	int n;
	char c;
	while (1)
	{
		vector<int>num;
		int Num;
		cin >> Num;
		if (Num == 0)break;
		for (int k = 0; k < Num ; k++)
		{
			int n;
			cin >> n;
			num.push_back(n);
		}
		for (int i = 0; i < num.size(); i++)
		{
			for (int j = 0; j < num.size() - 1; j++)
			{
				if (abs(num.at(j)) < abs(num.at(j + 1)))
				{
					int temp = num[j];
					num[j] = num[j+1];
					num[j + 1] = temp;
				}
			}
		}
		for (int i = 0; i < num.size(); i++)
		{
			cout << num[i]<<" ";
		}
		cout << endl;
	}

}