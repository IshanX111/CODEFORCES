#include <bits/stdc++.h>
using namespace std;
int main()
{

    int row, col, i, j, c = 0;
    cin >> row >> col;
    char b[row][col];
   
    for (i = 0; i < row; i++)
    {
        if (i % 2 == 0)
        {   
            for(j=0;j<col;j++){
                b[i][j] = '#';
            }
        }
        else if (i % 2 != 0 && c==0)
        {
                for (j = 0; j < col-1; j++)
                {
                    
                    b[i][j]='.';
                }
                b[i][j]='#';
                c=1;
            
        }
         else if (i % 2 != 0 && c==1)
        {       
                b[i][0]='#';
                for (j = 1; j < col; j++)
                {
                    b[i][j]='.';
                }
                c=0;
            
        }

    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cout<<b[i][j];
        }
        cout<<endl;
    }

}
