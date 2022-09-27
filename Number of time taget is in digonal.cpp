#include <iostream>
using namespace std;
const int N=100;

//countNumberOfTimesTargetIsInDiagonal containing row, col
int countNumberOfTimesTargetIsInDiagonal(int n, int A[][N], int row, int col, int target){
	int ans=0;
	//top-right i--, j++
	int i=row,j=col;
	while(i>=0 && j<n){
		if(A[i][j]==target) ans++;
		i--;
		j++;
	}
	
	//top-left => i--, j--
	i=row,j=col;
	while(i>=0 && j>=0){
		if(A[i][j]==target) ans++;
		i--;
		j--;
	}
	
	//bottom-right => i++, j++
	i=row,j=col;
	while(i<n && j<n){
		if(A[i][j]==target) ans++;
		i++;
		j++;
	}
	
	//bottom-left => i++, j--
	i=row,j=col;
	while(i<n && j>=0){
		if(A[i][j]==target) ans++;
		i++;
		j--;
	}
	
	//
	if(A[row][col]==target) ans-=3;
	return ans;
}

int main() {
	int n;
	cin>>n;
	int A[N][N];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>A[i][j];
		}
	}
	cout<<"Ans: "<<countNumberOfTimesTargetIsInDiagonal(n, A, 1, 2, 2)<<"\n";
	return 0;
}
