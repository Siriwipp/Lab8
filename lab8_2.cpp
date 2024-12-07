#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

char findGrade(float x){
    char y;
    if(x>90){
        return y='A';
    }else 
    if(x>75){
        return y='B';
    }else
    if(x>60){
        return y='C';
    }else
    if(x>45){
        return y='D';
    }else return y='F';
    
    return y;
}

int main(){
	
	int N,i = 0;
	cout << "Enter the number of students: ";
	cin >> N;
	string name[N];
	float score[N];	
	
	
	while(i < N){
		cout << "Name of student " << i+1 << ": ";
		cin.ignore();
		getline(cin,name[i]);
		cout << "Score of student " << i+1 << ": ";
		cin >>score[i];
		i++;
	}
	
	//Print names scores and grades
	i = 0;
	cout << "---------------------------------------------\n";
	cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << "\n";
	cout << "---------------------------------------------\n";
	while(i < N){
		cout << setw(25) << name[i] << setw(8) << score[i] << setw(8) << findGrade(score[i]) << "\n";
		i++;
	} 
	cout << "---------------------------------------------\n";

	return 0;
}
