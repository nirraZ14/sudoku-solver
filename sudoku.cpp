/*#include <bits/stdc++.h>
using namespace std;
int main(){
	string c;
	cout<<"Enter a number:"<<c;
	getline(cin,c);
	cout<<"Output ["<<c<<"]";
		
}
*/

#include <bits/stdc++.h>
using namespace std;

bool safe(int matrix[9][9],int row,int column,int num){
	for(int i=0;i<9;i++){
		if(matrix[i][column]==num){
			return false;
		}
	}
	for(int j=0;j<9;j++){
		if(matrix[row][j]==num){
			return false;
		}
	}
	int r=(row/3)*3;
	int c=(column/3)*3;
	for(int i=r; i<r+3;i++){
		for(int j=c;j<c+3;j++){
			if(matrix[i][j]==num){
				return false;
			}
		}
	}
	return true;
}

bool solve(int matrix[9][9]){
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			if(matrix[i][j]==-1){
				for(int num=1;num<=9;num++){
					if(safe(matrix,i,j,num)){
						matrix[i][j]=num;
						if(solve(matrix)){
							return true;
						}
						else{
							matrix[i][j]=-1;
						}
					}
				}
				return false;
			}
		}
	}
	return true;
}
					

int main(){
	int matrix[9][9];
	cout<<"Type your numbers (Type -1 to make a slot blank):\n";
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			cin>>matrix[i][j];
		}
	}
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			if(matrix[i][j]==-1){
				cout<<"[ ]\t";
			}
			else{
				cout<<matrix[i][j]<<"\t";
			}
		}
		cout<<endl;
	}
	if(solve(matrix)){
		cout<<"\nSolved\n";
		for(int i=0;i<9;i++){
			for(int j=0;j<9;j++){
				cout<<matrix[i][j];
			}
			cout<<endl;
		}
	}
	else{
		cout<<"\nUnsolvable\n";
	}
		
}


