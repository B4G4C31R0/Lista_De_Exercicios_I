#include <iostream>

using namespace std;

int main(){
	
	float matriz[3][4]={{1.2,2,3.3,4},{78.6,74.2,19,02},{84,211.1,49.3,20}};
	
	for (int i=0; i<3; i++){
			cout<<"[";
			for (int j=0; j<4; j++){
				if (j<4-1){
					cout<<matriz[i][j]<<", ";
				}
				else{
					cout<<matriz[i][j];
				}
			}
			cout<<"]"<<endl; 
	}

	return 0;
}
