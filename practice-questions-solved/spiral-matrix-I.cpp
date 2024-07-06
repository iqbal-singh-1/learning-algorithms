#include <iostream>
#include <vector>
using namespace std;
    void spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();    //no of rows
        int n=matrix[0].size(); //no of columns
        int sr=0, ec=n-1, sc=0, er=m-1;
        int c = 0;
        int total=m*n;
        vector<int> ans;
        while(c<total) //stop when count >= total
        {
            for(int i = sc ; c<total && i<=ec ; i++)
            {   
                //entering values in starting row

                ans.push_back(matrix[sr][i]);
                c++;
            }
            sr++;
            for(int i = sr ; c<total && i<=er ; i++)
            {
                //entering values in ending column

                ans.push_back(matrix[i][ec]);
                c++;
            }
            ec--;
            for(int i = ec ; c<total && i>=sc ; i--)
            {
                //entering values in ending row
            
                ans.push_back(matrix[er][i]);
                c++;
            }
            er--;
            for(int i = er ; c<total && i>=sr ; i--)
            {
                //entering values in starting column

                ans.push_back(matrix[i][sc]);
                c++;
            }
            sc++;
        }
        cout << "Spiral order is"<<endl;
        for(int i = 0 ; i<m*n ; i++)    //printing elements
        {
            cout<<(ans[i]) << " ";
        }
    }
int main()
{
    int n;
    cout << "enter no of rows"<<endl;   //no of rows
    cin >> n;
    int m;
    cout << "enter no of columns"<<endl;    //no of columns
    cin >> m;
    vector<vector<int>> matrix(n,vector<int> (m));
    int x;
    cout << "enter row wise elements"<<endl;
    for(int i = 0 ; i<n ; i++)  //user input
    {
        for(int j = 0 ; j<m ; j++)
        {
            cin >> x;
            matrix[i][j]=x;
        }
    }
    spiralOrder( matrix) ;
}