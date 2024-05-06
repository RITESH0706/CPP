#include<iostream>
using namespace std;
 
class Matrix{
	public:
	int matrix[3][3];
	int matrix2[3][3];
	
	int r=3;
	int c=3;
	
		Matrix operator >>(Matrix &obj){
	
		for(int i=0;i<obj.r;i++){
			for(int j=0;j<obj.c;j++){
				cin>>obj.matrix[i][j];
				
			}
		}for(int i=0;i<obj.r;i++){
			for(int j=0;j<obj.c;j++){
				cin>>obj.matrix2
				[i][j];
				
			}
		}
	}
	Matrix operator <<(Matrix &obj){

		for(int i=0;i<obj.r;i++){
			for(int j=0;j<obj.c;j++){
				cout<<obj.matrix[i][j]<<"\t";
				
			}cout<<"\n";
		}
		for(int i=0;i<obj.r;i++){
			for(int j=0;j<obj.c;j++){
				cout<<obj.matrix2[i][j]<<"\t";
				
			}cout<<"\n";
		}
		for(int i=0;i<obj.r;i++){
			for(int j=0;j<obj.c;j++){
		matrix[i][j]+=matrix2[i][j];
		cout<<matrix[i][j];
	}}
	}
	
};
int main(){
	Matrix m;
	Matrix m1;
	m1>>m;
	Matrix m2;
	cout<<"Matrix is : \n";
	m2<<m;
	/*Matrix m3;
	m3>>m2;
	m3<<m2;*/
	
	

}
