//Sarah Alabdullah: 2170003588, Maryam Alayaat :2170008191 , Wesal Alobaidi: 2170004246
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int y,z,avge=0;
char namec[100];
double average(int k,int sum){
	avge= sum/k;
	return avge;
	
}

void agrade(int y,string corse[5], int grade[][5]){
	for(int g=0;g<y;g++){
			cout<<"Enter grade number of student # "<<g+1<<" :\n";
			for(int v=0;v<5;v++){
				cout<<"Enter grade of "<<corse[v]<<" : ";
				cin>>grade[g][v];
				if(grade[g][v]>100 || grade[g][v]<0)
				{cout<<"Eror,enter another grade (0-100): \n" ;
			cout<<"Enter grade of "<<corse[v]<<" : ";
			cin>>grade[g][v];	}}}
}
void agrade(int grade[][5],int row,string corse[5])
{for(int h=0;h<5;h++)
{cout<<"the letter grade for "<<corse [h]<<" is: ";
if (grade[row][h]>=90)
cout<<"A";
else
if (grade[row][h]>=80)
cout<<"B";
else
if (grade[row][h]>=70)
cout<<"C";
else
if (grade[row][h]>=60)
cout<<"D";
else
cout<<"F";
cout<<endl;
}
}

int main()
{
	int m=0;
	cout<<"Enter number of your students : ";
	cin>>y;
	cin.get();
	string name[y];
	cout<<"Enter names: \n";
	for(int x=0;x<y;x++){
		cout<<"Enter name of student "<<x+1<<"(with last name) : ";
		getline(cin,name[x]);
		}
int grade[y][5]={0};
string corse[5];
cout<<"Enter names of 5 corses:\n ";
		for(int c=0;c<5;c++){
		cout<<"Enter course number "<<c+1<<" without space please: ";
	cin>>corse[c];	}
	while(m!=6){
		cout<<"***********************************************************"<<endl;
		cout<<"menue:\n";
		cout<<"1- add a students' grade in all courses. \n";
		cout<<"2- print grades for a specific course and the average. \n";
		cout<<"3- print the grade letter for all corses for specific student. \n";
		cout<<"4- update the grade of student in a specific corse. \n";
		cout<<"5- deleate a specific mark for specific student. \n";
		cout<<"6- exit.\n";
		cout<<"$$choose a number please: ";
		cin>>m;
		switch(m){
		case 1:
			agrade( y,corse,grade);
			break;
			case 2:
			{
	int sum=0,o=0;
	cout<<"Enter the name of corse you want: ";
	cin.get();
		cin.getline (namec,100);
	for(int f=0;f<5;f++){
		if(namec==corse[f]){
	for(int x=0;x<y;x++){
		cout<<"the grade of student "<<x+1<<" : ";
	cout<<grade[x][f]<<endl;
	sum= sum+grade[x][f];
	}}
	else
	continue;}
o= average(y,sum);
	cout<<"the average in corse "<<namec<<" is : "<<o<<endl ;}
				break;
				case 3:{
					int d;
				cout<<"Enter id of student (number which was next their name): ";
				cin>>d;
for(int t=0;t<y;t++){
if ((d-1 )== t){

agrade( grade,t, corse);
break;}
else
continue;
}
}
					break;
					case 4:{
		string names;
						cout<<"Enter student's name: ";
						cin.get();
					getline(cin,names);
		cout<<"Enter the corse you want to update: ";
		cin>>namec;
		for(int n=0;n<y;n++){
			for(int r=0;r<5;r++){
				if((names==name[n]) && (namec==corse[r])){
					cout<<"Enter the grade you want: ";
					cin>>grade[n][r];
					cout<<"now it is update.\n";
					break;
				}
				
			}
		}
	
	
					}
					
						break;
						case 5:{
							string sname;
						   	cout<<"Enter student's name: ";
					     	cin.get();
				         	getline(cin,sname);
		                     for(int p=0;p<y;p++){
			                     	if(sname==name[p]){
		                                 for(int k=0;k<4;k++){
		                                     grade[p][k]=grade[p][k+1];                                       
										}
										grade[p][4]=0;
										break;}
									}
								cout<<"now it is deleted.\n";	}
							break;
							case 6:
								cout<<"thank you!";
								break;
								default:
								cout<<"Eror,choose again \n ";				
	}	
	}
	
	
}
