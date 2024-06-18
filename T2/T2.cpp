//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//	int stunum, subnum;
//	while (scanf_s("%d%d", &stunum, &subnum) != EOF)
//	{ 
//		int arr[51][6];
//		for (int i = 0; i < stunum; i++)
//		{
//			for (int j = 0; j < subnum; j++)
//			{
//				cin >> arr[i][j];
//			}
//		}
//
//		for (int i = 0; i < stunum; i++)
//		{
//			float stuaverage = 0;
//			for (int j = 0; j < subnum; j++)
//			{
//				stuaverage += arr[i][j];
//			}
//			stuaverage /= subnum;
//			cout << fixed << setprecision(2) << stuaverage << " ";
//		}
//		cout << endl;
//		float subaverage[6] = { 0,0,0,0,0,0 };
//		for (int i = 0; i < subnum; i++)
//		{
//			for (int j = 0; j < stunum; j++)
//			{
//				subaverage[i] += arr[j][i];
//			}
//		}
//		for (int i = 0; i < subnum; i++)
//		{
//			subaverage[i] /= stunum;
//			cout << fixed << setprecision(2) << subaverage[i] << " ";
//		}
//		cout << endl;
//		int goodnum = 0;
//		for (int i = 0; i < stunum; i++)
//		{
//			int n = 0;
//			for (int j = 0; j < stunum; j++)
//			{
//				if (arr[i][j] < subaverage[j])n = 1;
//			}
//			if (n == 0)goodnum++;
//		}
//		cout << goodnum << endl << endl;
//	}
//}




#include<iostream>
#include<iomanip>
#include<stdio.h>
using namespace std;
int main()
{
    double sum1[50], sum2[5], stu[50][5];    
    int n, m;   
    while (cin >> n >> m)
    {
        for (int i = 0; i < n; i++)
            sum1[i] = 0.0;
        for (int i = 0; i < m; i++)
            sum2[i] = 0.0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> stu[i][j];
                sum1[i] += stu[i][j];
                sum2[j] += stu[i][j];
            }
        }
        for (int i = 0; i < n; i++)  
        {
            if (i != n - 1)
                printf("%.2lf ", sum1[i] / m);
            else
                printf("%.2lf\n", sum1[i] / m);
        }
        for (int j = 0; j < m; j++)    
        {
            if (j != m - 1)
                printf("%.2lf ", sum2[j] / n);
            else
                printf("%.2lf\n", sum2[j] / n);
        }

        int num = 0;
        for (int i = 0; i < n; i++)
        {
            int k = 1;
            for (int j = 0; j < m; j++)
            {
                if (stu[i][j] >= sum2[j] / n)
                    k = 1;       
                else
                {
                    k = 0;
                    break;
                }
            }
            if (k == 1)
                num++;
        }
        cout << num << endl;
        cout << endl;
    }
}
