#include <iostream>
#include <vector>
using namespace std;
void spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> spiral(rows*cols , vector<int> (2,0));
        spiral[0]={rStart,cStart};
        int c = 1 , rC = 1 , cC = 1;
        while(c<rows*cols)
        {
            int i = 0;
            while(i<cC && c<rows*cols)
            {
                if (cC%2==1) cStart++;  //if colcount(cC) is odd then keep on increasing cStart
                else cStart--;  //else decrease cStart
                i++;
                if(cStart>=cols || rStart>=rows || cStart<0 || rStart<0)    //if we are out of matrix, keep on going until a valid coordinate is found
                {
                    continue;
                }
                else    //when valid coordinate found , store it in matrix
                {
                    spiral[c] = {rStart,cStart};
                    c++;
                }
            }
            int j = 0;
            while(j<rC && c<rows*cols)
            {
                if(rC%2==1) rStart++;   //if rowcount(cC) is odd then keep on increasing rStart
                else rStart--;  //else decrease rStart
                j++;
                if(cStart>=cols || rStart>=rows || cStart<0 || rStart<0)    //if we are out of matrix, keep on going until a valid coordinate is found
                {
                    continue;
                }
                else    //when valid coordinate is found , store it in matrix
                {
                    spiral[c]={rStart,cStart};
                    c++;
                }
            }
            rC++;
            cC++;
        }
        //printing the coordinates
        for(int i = 0 ; i<rows*cols ; i++)
        {
            cout<<"[";
            for(int j = 0 ; j<2 ; j++)
            {
                cout<<(spiral[i][j]);
                if(j!=1) cout<<",";
            }
            cout<<"]";
            if(i<rows*cols-1) cout<<",";
        }
    }
int main()
{
    //user input for the function

    int rows , cols , rStart , cStart ;
    cout<<"Enter no of rows"<<endl;
    cin>>rows;
    cout<<"Enter no of cols"<<endl;
    cin>>cols;
    cout<<"Enter starting row"<<endl;
    cin>>rStart;
    cout<<"Enter starting col"<<endl;
    cin>>cStart;

    //calling spiralMatrixII function

    spiralMatrixIII(rows,cols,rStart,cStart);

}