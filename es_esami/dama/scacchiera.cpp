#include<iostream>
#include<vector>
using std::string;
using std::cout;


Scacchiera::Scacchiera() 
{
	for(int i=0; i!=8; i++)
	{
		for(int j=0; j!=8; j++)
		{
			if(((i+j)%2)==0)
			{
				board[i][j]='+';
			}
			else if(i>4)
			{
				board[i][j]='o';
			}
			else if(i<3)
			{
				board[i][j]='*';
			};
		};
	};
}

void Scacchiera::print()
{
	cout<<"    0  1  2  3  4  5  6  7\n"
	    <<"  +---------------------------+\n":

	for(int i=0;i!=8;i++)
	{
		cout<<i<<"|";
		
		for(int j=0;j!=8;j++)
		{
			cout<<b[i][j]<<" ";
		}

		cout<<"|";
	}
}

void Scacchiera::get_pos(int x, int y)
{
	return(board[x][y]);
}

void moove (int f-x, int f-y, int t-x, int t-y)
{
	board[t-x][t-y]=board[f-x][f-y];

	board[f-x][f-y]='+';
}


