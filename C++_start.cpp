#include<iostream>
#include<math.h>
#include<string>

#include<bits/stdc++.h>  // we dont need to import other library after this

using namespace std;  // we dont have to write std every  time
int main(){
	std::cout << "Hey string" << "\n";
	std::cout << "Hey Fahad";
	return 0; 
}



//# Common skeleton of program

int main(){
	
	int x,y;
	cout << "Hey string" << "\n";
	cout << "Hey Fahad"<< "\n";
	
	cin >> x >> y;
	cout << "value of x: "<< x << "\nValue of y: " << y;
	return 0; 
}


// # Data type
int main(){
	//int
	int a = 10;
	//long
	long z = 15;
	
	// long long
	long long t= 1500000000000;
	
	// float
	float x = 5.6;
	float y = 5;
	cout << "value of Y:" << y;
	return 0;
}


// # Method 1
int main(){
	
	// string , given hello world but print only hello if we give string s1 only
	string s1;
	string s2;
	
	cin >> s1 >> s2;
	cout << s1 << " " << s2;
	return 0;
}

// Method 2
int main(){
	string str;
	getline(cin,str);
	cout << str;
	return 0;
}


// #if else statement
// #take an input of age and print if you are abult or not
//
int main(){
	int age;
	cin >> age;
	if(age >= 18){
		cout << "You are adult!";
	}
	else if(age>12 && age<18){
		cout << "you arre teanage";
	}
	else{
		cout << "you are child";
	}
	return 0;
}



// #switch statement 
// take 1 for monday ... 7 from sunday print
int main(){
	int day;
	cout << "Enter the number from(1 - 7) :";
	cin >> day;
	
	switch(day) {
		case 1:
			cout << "monday";
			break;
		case 2:
			cout << "Tuesday";
			break;
		case 3:
			cout << "Wednesday";
			break;
		case 4:
			cout << "Thursday";
			break;
		case 5:
			cout << "Friday";
			break;
		case 6:
			cout << "Saturday";
			break;
		case 7:
			cout << "Sunday";
			break;
		default:
			cout << "Invalid !";
	}
	return 0;
}


//# Array and string
//1D array
int main(){
	int arr[5];
	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
	arr[3] += 10;
	cout << "Array at posion 3 is ->" << arr[3];
	
	return 0;
}


// # for loop 
int main (){
	for(int i =1;i<=10;i = i+1){
		cout << i << " Fahad"<< endl;
	}
	return 0;
}


// # while loop
int main(){
	int i = 1;
	while(i<=5){
		cout << "Fahad" << i << endl;
		i +=1;
	}
	return 0;
}


// # do while loop
int main(){
	int i = 2;
	do {
		cout << "Fahad" << i << endl;
		i +=1;
	}while(i<=1);
	cout << i << endl;
		
	return 0;
}


// # Functions
// void -> does not return any thing 
// return 
// parametrize
// non parametrize


void PrintName(string name){
	cout << "Hey " << name << endl;  // endl is end line
}

int main(){
	string name ;
	cin >> name;
	PrintName(name);
	
	string name2 = "Striver";
	PrintName(name2);
	return 0;
}

// # Table
void table(int num){
	for(int i = 1;i<= 10;i+=1){
		cout << num << " x " << i <<" = "<< num*i <<endl;
	}
}

int main(){
	int num ;
	cin >> num;
	table(num);
	return 0;
}















