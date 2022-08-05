#include <bits/stdc++.h>
using namespace std;
bool isValid(int a[9][9], int r, int c, int k){
    for(int i = 0; i<9; i++){
        const int x = 3*(r/3) + (r/3);
        const int y = 3*(c/3) + (c%3);
        if(a[r][i]==k || a[i][c]==k || a[x][y]==k){
            return false;
        }
    }
    return true;
}
bool sudokusolver(int a[9][9]){
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (a[i][j]==0){
                for (int k = 1; k <=9 ; k++)
                {
                    if(isValid(a,i,j,k)){
                        a[i][j] = k;
                        if(sudokusolver(a)) return true;
                        else a[i][j] = 0;
                    }
                }
                return false;
            } 
            
        }
       
    }
    return true;
}
int main()
{     
    int i,j,input[9][9];
    for (i = 0; i < 9; i++){
      for (j = 0; j < 9; j++){
        cin>>input[i][j];
      }
    }
    bool out = sudokusolver(input);
    for (i = 0; i < 9; i++){
      for (j = 0; j < 9; j++){
        cout<<input[i][j]<<", ";
      }
      cout<<endl;
    }
    return 0;
}