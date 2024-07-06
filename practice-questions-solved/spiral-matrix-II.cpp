#include <iostream>
#include <vector>
using namespace std;
void generateMatrix(int n) {
        vector< vector<int>> spiral(n,vector<int> (n));  //initializing spiral vector with "n" rows and "n" columns
        int c = 0 , sR=0 , sC = 0 , eR = n-1 , eC = n-1;
        while(c<n*n)    //stop when count >= n*n
        {
            for(int i = sC ; c<n*n && i<=eC ; i++)
            {
                //entering values in starting row

                spiral[sR][i]=c+1;
                c++;
            }
            sR++;
            for(int i = sR ; c<n*n && i<=eR ; i++)
            {
                //entering values in ending column

                spiral[i][eC]=c+1;
                c++;
            }
            eC--;
            for(int i = eC ; c<n*n && i>=sC ; i--)
            {
                //entering values in ending row

                spiral[eR][i]=c+1;
                c++;
            }
            eR--;
            for(int i = eR ; c<n*n && i>=sR ; i--)
            {
                //entering values in starting column

                spiral[i][sC]=c+1;
                c++;
            }
            sC++;
        }
        cout << "spiral vise elements are"<<endl; // printing elements in spiral order
        for(int i = 0 ; i<spiral.size() ; i++)
        {
            for(int j = 0 ; j<spiral[0].size() ; j++)
            {
                cout << (spiral[i][j]) << " ";
            }
        }
    }
int main()
{
    int n;
    cout << "enter a value"<<endl;   //value of n
    cin >> n;
    generateMatrix(n);

}