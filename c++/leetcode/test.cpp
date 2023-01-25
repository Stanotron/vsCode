#include <bits/stdc++.h>
    
#define fr(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    
using namespace std;

class Solution {
public:
    vector<vector<int>> vii;

    bool checkPO(int i, int j, vector<vector<int>>& heights){
        if(j==0 || i==0) return true;
        int temp = heights[i][j];

        heights[i][j] = INT_MAX; 
        
        if(temp>=heights[i-1][j]){
            if(checkPO(i-1,j,heights)){
                heights[i][j] = temp;
                return true;
            } 
        }
        if(temp>=heights[i][j-1]){
            if(checkPO(i,j-1,heights)){
                heights[i][j] = temp;

                return true;
            } 
        }  
        
        if(j<heights[0].size()-1 && temp>=heights[i][j+1]){
            if(checkPO(i,j+1,heights)){
                heights[i][j] = temp;
                return true;
            } 
        }
        
        if(i<heights.size()-1 && temp>=heights[i+1][j]){
            if(checkPO(i+1,j,heights)){
                heights[i][j] = temp;
                return true;
            }
        }
        heights[i][j] = temp;
        return false;
    }

    bool checkAO(int i, int j, vector<vector<int>>& heights){
        if(j==heights[0].size()-1 || i==heights.size()-1) return true;
        
        int temp = heights[i][j];
        heights[i][j] = INT_MAX;
        
        if(temp>=heights[i+1][j]){
           if(checkAO(i+1,j,heights)){
                heights[i][j] = temp;
                return true;
           }  
        } 

        if(temp>=heights[i][j+1]){
           if(checkAO(i,j+1,heights)){
                heights[i][j] = temp;
                return true;  
           }  
        }

        if(i>0 && temp>=heights[i-1][j]){
            if(checkAO(i-1,j,heights)){
                heights[i][j] = temp;
                return true;
            } 
        }
        
        if(j>0 && temp>=heights[i][j-1]){
            if(checkAO(i,j-1,heights)){
                heights[i][j] = temp;
                return true;
            } 
        }
        
        heights[i][j] = temp;
        return false;
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        if(heights.size()==1 && heights[0].size()==1) return {{0,0}};
        for(int i = 0; i<heights.size(); i++){
            for(int j = 0; j<heights[0].size(); j++){
                if(checkPO(i,j,heights) && checkAO(i,j,heights)){
                    vii.push_back({i,j});
                } 
            }
        }
        // cout<<checkAO(0,1,heights);
        return vii;
    }
};

int main()
{
    fast_io;
    ll t;
    t = 1;
    vector<vector<char>> v {
      {'1','1','1','1','0'},
      {'1','1','0','1','0'},
      {'1','1','0','0','0'},
      {'0','0','0','0','0'}
    };
    // cin>>t;
    while(t--){
        Solution sol;
        sol.numIslands(v);
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;

#define COMPUTER 1
#define HUMAN 2

#define SIDE 3 

#define COMPUTERMOVE 'O'
#define HUMANMOVE 'X'

void showBoard(char board[][SIDE])
{
	printf("\n\n");
	
	printf("\t\t\t %c | %c | %c \n", board[0][0],
							board[0][1], board[0][2]);
	printf("\t\t\t--------------\n");
	printf("\t\t\t %c | %c | %c \n", board[1][0],
							board[1][1], board[1][2]);
	printf("\t\t\t--------------\n");
	printf("\t\t\t %c | %c | %c \n\n", board[2][0],
							board[2][1], board[2][2]);

	return;
}

void showInstructions()
{
	printf("\t\t\t Tic-Tac-Toe\n\n");
	printf("Choose a cell numbered from 1 to 9 as below"
			" and play\n\n");
	
	printf("\t\t\t 1 | 2 | 3 \n");
	printf("\t\t\t--------------\n");
	printf("\t\t\t 4 | 5 | 6 \n");
	printf("\t\t\t--------------\n");
	printf("\t\t\t 7 | 8 | 9 \n\n");
	
	printf("-\t-\t-\t-\t-\t-\t-\t-\t-\t-\n\n");

	return;
}


void initialise(char board[][SIDE], int moves[])
{
	srand(time(NULL));
	
	for (int i=0; i<SIDE; i++)
	{
		for (int j=0; j<SIDE; j++)
			board[i][j] = ' ';
	}
	
	for (int i=0; i<SIDE*SIDE; i++)
		moves[i] = i;

	random_shuffle(moves, moves + SIDE*SIDE);
	
	return;
}

void declareWinner(int whoseTurn)
{
	if (whoseTurn == COMPUTER)
		printf("COMPUTER has won\n");
	else
		printf("HUMAN has won\n");
	return;
}

bool rowCrossed(char board[][SIDE])
{
	for (int i=0; i<SIDE; i++)
	{
		if (board[i][0] == board[i][1] &&
			board[i][1] == board[i][2] &&
			board[i][0] != ' ')
			return (true);
	}
	return(false);
}

bool columnCrossed(char board[][SIDE])
{
	for (int i=0; i<SIDE; i++)
	{
		if (board[0][i] == board[1][i] &&
			board[1][i] == board[2][i] &&
			board[0][i] != ' ')
			return (true);
	}
	return(false);
}

bool diagonalCrossed(char board[][SIDE])
{
	if (board[0][0] == board[1][1] &&
		board[1][1] == board[2][2] &&
		board[0][0] != ' ')
		return(true);
		
	if (board[0][2] == board[1][1] &&
		board[1][1] == board[2][0] &&
		board[0][2] != ' ')
		return(true);

	return(false);
}

bool gameOver(char board[][SIDE])
{
	return(rowCrossed(board) || columnCrossed(board)
			|| diagonalCrossed(board) );
}

void playTicTacToe(int whoseTurn)
{
	char board[SIDE][SIDE];
	
	int moves[SIDE*SIDE];
	
	initialise(board, moves);
	
	showInstructions();
	
	int moveIndex = 0, x, y;
	
	while (gameOver(board) == false &&
			moveIndex != SIDE*SIDE)
	{
		if (whoseTurn == COMPUTER)
		{
			x = moves[moveIndex] / SIDE;
			y = moves[moveIndex] % SIDE;
			board[x][y] = COMPUTERMOVE;
			printf("COMPUTER has put a %c in cell %d\n",
					COMPUTERMOVE, moves[moveIndex]+1);
			showBoard(board);
			moveIndex ++;
			whoseTurn = HUMAN;
		}
		
		else if (whoseTurn == HUMAN)
		{
			x = moves[moveIndex] / SIDE;
			y = moves[moveIndex] % SIDE;
			board[x][y] = HUMANMOVE;
			printf ("HUMAN has put a %c in cell %d\n",
					HUMANMOVE, moves[moveIndex]+1);
			showBoard(board);
			moveIndex ++;
			whoseTurn = COMPUTER;
		}
	}

	if (gameOver(board) == false &&
			moveIndex == SIDE * SIDE)
		printf("It's a draw\n");
	else
	{
		if (whoseTurn == COMPUTER)
			whoseTurn = HUMAN;
		else if (whoseTurn == HUMAN)
			whoseTurn = COMPUTER;
		
		declareWinner(whoseTurn);
	}
	return;
}

int main()
{
	playTicTacToe(COMPUTER);
	
	return (0);
}
