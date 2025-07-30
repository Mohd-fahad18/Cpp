// nested loop 
#include<bits/stdc++.h>
using namespace std;

// 1)
//*
//**
//***
//****
int main(){
	for(int i = 1;i <=4; i ++){
		for(int j= 1;j <= i; j++){
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}

// 2)
//****
//****
//****
//****
void print(int n){
	for(int i = 1;i <=n; i ++){
		for(int j= 1;j <= n; j++){
			cout << "* ";
		}
		cout << endl;
	}
}

int main(){
	int t;
	cin >> t;
	for(int i = 0; i<= t; i++){
		int n;
		cin >> n;
		print(n);
	}
}

// 3)
//1
//1 2
//1 2 3
//1 2 3 4

int main(){
	for(int i =1;i<=4;i++){
		for(int j = 1;j<=i;j++){
			cout << j << " ";
		}
		cout << endl;
	}
}

// 4)
//1 2 3 4
// 2 3
//1 2
//1
int main(){
	for(int i = 1;i <= 4 ; i++){
		for(int j = 1;j <= 4-i+1 ; j++){
			cout << j << " ";
		}
		cout << endl;
	}
}

// 5)
//Pyramid
int main(){
	for(int i=0;i<=5;i++){
		for(int j=0;j<5-i+1;j++){
			cout<< "  ";
		}
		for(int j = 0;j<2*i+1;j++){
			cout << "* ";
			
		}
		for(int j=0;j<5-i+1;j++){
			cout<< "  ";
		}
		cout << endl;
	}
}

// 6)
//Diamond
//   *
//  ***
// *****
//  ***
//   * 

int main(){
	for(int i=0;i<=5;i++){
		for(int j=0;j<5-i+1;j++){
			cout<< "  ";
		}
		for(int j = 0;j<2*i+1;j++){
			cout << "* ";
			
		}
		for(int j=0;j<5-i+1;j++){
			cout<< "  ";
		}
		cout << endl;
	}
	for(int i=0;i<=5;i++){
		for(int j=0;j<=i+1;j++){
			cout<< "  ";
		}
		for(int j = 0;j<10-(2*i+1);j++){
			cout << "* ";
			
		}
		for(int j=0;j<=i+1;j++){
			cout<< "  ";
		}
		cout << endl;
	}
}


// 7)
//*
//* *
//* * *
//* *
//*

void print2(int n){
	for(int i =1;i<=2*n-1;i++){
		int stars =i;
		if(i > n) stars =2*n -i;
		for(int j = 1;j<= stars;j++){
			cout <<"* ";
		}
		cout << endl;
	}
	
}
int main(){
	int t;
	cin >> t;
	for(int i = 0;i <t;i++){
		int n;
		cin >> n;
		print2(n);
	}
}


// 8)
//1
//2 3
//3 4 5 
//6 7 8 9
//10 11 12 13 14
int main(){
	int num =1;
	for(int i = 1;i<=5;i++){
		for(int j = 1;j <= i;j++ ){
			cout << num << " ";
			num +=1;
		}
		cout << endl;
	}
}


//A 
//A B
//A B C
//A B C D
int main(){
	for(int i =0; i<5;i++){
		for(char ch = 'A';ch <='A'+i;ch++){
			cout << ch << " ";
		}
		cout << endl;
	}
}

// 9)
//E
//D E
//C D E
//B C D E
//A B C D E
int main(){
	for(int i = 0; i< 5;i++){
		for(char ch ='E'-i;ch <= 'E'; ch++){
			cout << ch << " ";
		}
		cout << endl;
	}
}


// 10)
//********
//***  ***
//**    **
//*      *
//**    **
//***  ***
//********
int main(){
	for(int i=0;i<=5;i++){
		for(int j=0;j<5-i+1;j++){
			cout<< "*";
		}
		for(int j = 0;j<2*i;j++){
			cout << " ";
			
		}
		for(int j=0;j<5-i+1;j++){
			cout<< "*";
		}
		cout << endl;
	}
	for(int i=0;i<=5;i++){
		for(int j=0;j<=i;j++){
			cout<< "*";
		}
		for(int j = 0;j<10-(2*i);j++){
			cout << " ";
			
		}
		for(int j=0;j<=i;j++){
			cout<< "*";
		}
		cout << endl;
	}
}












