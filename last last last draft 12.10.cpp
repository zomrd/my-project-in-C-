//Group Number 2
//Members:
//Malak Alghamdi 2210003519
//Zomrd Salman 2210003594
//Reema aseri 2210003688
//Muneera Aljalal  2210003530

#include <iostream>
#include <fstream>

using namespace std;


ofstream appfile; ///file for braches 
int *ptr;

void Menu (){
  cout << "\n\n>>>Please choose a task : \n";
	cout<<"a- apply for a job"<<endl;
	cout<<"b- custmer"<<endl<<":";
	cout<<"e- exist "<<endl;
	cout << "\n>>>>> Enter Your choice : "<<endl;
}

struct Date
{
int day;
int month;
int year;
};

struct data{
string name;
string lname;
string ID;
Date birth;
char gender;
string email,github,Linked_in;
int phone;

};
string all[8]; 
 //Take all employee data
void data_employee(data em[],int size1,string n[] ,int size2){
	
		int index=0;
		ofstream outdata;
	outdata.open("dataOfEmplyeeeeeez.txt",ios::app);
	if (outdata.is_open() || outdata.is_open()==true){
     // Print the information table
    
    outdata<< "____________________________________________________________________________________________________________________________________________________________________"<< endl;
    for ( int i=0; i<size2; i++ ){
        outdata<<"\t"<<n[i] <<"\t|";
    }
    outdata<<endl;
    outdata<< "____________________________________________________________________________________________________________________________________________________________________"<< endl;
    cout<<endl;
    cout<<"_____________________________________________________________________________"<<endl;
    //// take the information from the user and print it in fail so the company can view
    cout<<"Now you should complate your personal information "<<endl;
    	
        cout<<"\nenter your ID: ";
		cin>>em[index].ID;
	    outdata<<"\t"<<em[index].ID<<"\t|";

		cout<<"\n enter your first name and last name: ";
		cin>>em[index].name>>em[index].lname;
		outdata<<"\t"<<em[index].name<<" "<<em[index].lname<<"\t|";
		
		appfile<<"Name :"<<em[index].name<<" "<<em[index].lname<<endl;  ///will print it with the branch file 
		
		cout<<"Enter your date of birth (d/m/y): "<<endl;
	    cin >> em[index].birth.day >>em[index].birth.month >>em[index].birth.year;
	    outdata<<"\t"<<em[index].birth.day<<" "<<em[index].birth.month<<" "<<em[index].birth.year<<" \t|";
	    do{
		
	    cout<<"Enter your gender (f or m):"<<endl;
		cin>>em[index].gender;
		}while(em[index].gender != 'f' && em[index].gender != 'm');
		outdata<<"\t"<<em[index].gender<<"\t|";
		
		cout<<"Enter your phone number: "<<endl;
	    cin>>em[index].phone;
	    outdata<<"\t"<<em[index].phone<<"\t|";
	    
	    cout<<"Enter your email"<<endl;
	    cin>>em[index].email;
	    outdata<<"\t"<<em[index].email<<"\t|";
	    
	    appfile<<"Email :"<<em[index].email<<endl; ///will print it with the branch file 
	    if(*ptr == 1){
	
	    cout<<"Enter your account in Git Hub"<<endl;
	    cin>>em[index].github;
	    outdata<<"\t"<<em[index].github<<"\t|";
		}
		
	    cout<<"Enter your account in Linked in"<<endl;
	    cin>>em[index].Linked_in;
	    outdata<<"\t"<<em[index].Linked_in<<"\t|";
		index++;
		cout<<endl;
}
	outdata.close();

}
//// print the information thet user enterd in screen 
void data_employee(data em[]){
	
	int index=0;
	cout<<endl;
	cout<<"<<<<<<<<< So , your personal information is  ";
	cout<<endl;
	
	cout<<"The Employee ID is : "<<em[index].ID<<endl;
	
	cout<<"The employee's name is : "<<em[index].name<<" "<<em[index].lname<<endl;
	
	cout<<"The employee's date of birth is: "<< em[index].birth.day<<" / "<<em[index].birth.month<<" / "<<em[index].birth.year<<endl;
	
	cout<<"The gender of the employee is : "<<em[index].gender<<endl;
	
	cout<<"The employee's phone number is : "<<em[index].phone<<endl;
	
	cout<<"The employee's email is : "<<em[index].email<<endl;
	
	cout<<"The employee's  account in Git Hub is : "<<em[index].github<<endl;
	
	 cout<<"The employee's  account in Linked in is :"<<em[index].Linked_in<<endl;
	 
	cout<<"Thank you !"<<endl;
	cout<<"______________________________________________________________________________________________"<<endl;
index++;
	
}
// A questions for the employee to pass or faild 
int Questions(){
	
	int count=0;
	double code;
	do{
	cout<<"\nwhat is your GPA in univercity?";
	cin>>code;
	}while(code > 5);
	if(code >= 3&&code<6){
		count +=20;
	if(*ptr== 3)
	count +=10;
	}
	if(code>5){
	cout<<"try again"<<endl;
	cout<<"\nwhat is your GPA in univercity?";
	cin>>code;
	}
    
	cout<<"\nwhat is your GPA in ILETS exam?";
	cin>>code;
	if(code >= 6&&code<10){
	count +=20;
	if(*ptr== 3)
	count +=10;
	}
	if(code>9)
	{
		cout<<"try again"<<endl;
		cout<<"\nwhat is your GPA in ILETS exam?";
	    cin>>code;	
	}
	
	cout<<"\nHow many volunteer hours do you have? ";
    cin>>code;
    if(code >= 100)
   count+=20;
   
   if(*ptr == 1){
    cout<<"\nHow many game devlopment languages do you know?";
    cin>>code;
    if(code >=2)
    count+=20;
	}
	
	if(*ptr == 2){
		cout<<"\nHow many game engines do you use perfectly?";
		cin>>code;
		if(code >=2)
    	count+=20;
	}
	
    return count;
}
	
    void exam_mark()
	{
	int numBranchs;
	cout<<endl;
	///will print branches that need emp and ask the user to enter how many branches of these can work ,the user should enter branches that near to where lives
		cout<<"Branches that need employee"<<endl;
		string branches[9]={"jeddah","taif","mcah","Riadh","khobar","Damam","Qatif","jubail","Madina"};
		for (int i = 0; i < 9; i++){
        cout << branches[i] << "\n";
        }
        cout<<"enter how many Branches of these can you work on it ";
        cin>>numBranchs ;
    	  while (numBranchs>9){
    	  	cout<<endl;
    	  	cout<<"Excuse, the number of branches entered should not be more than 9 trying again"<<endl;
    	  	  cout<<"enter how many Branches of these can you work on it ";
    	  	  cin>>numBranchs ;
		  }
         string* myBranchs= new string [numBranchs];
         
        for(int i=0;i<numBranchs;i++)
		{
	    cout<<"Branchs["<<i+1<<"]";
	    cin>>myBranchs[i];
	    appfile<<"\nthe branche/s["<<i+1<<"]"<<myBranchs[i];   ///will print branches with email and name in a file 
        }
        appfile<<"\n--------------------------------\n";
        
        cout<<endl;
        cout<<">>>>>>>So,Branchs you enterd :";
       for(int i=0;i<numBranchs;i++)
     {
     	cout<<*(myBranchs+i)<<"  ";
	 }
	 cout<<"\n<<<we will send to you an email to make the interviwe at any of branches you selected "<<endl;
	delete []myBranchs;
     }
     
void menu () { //List of games available in the company with the price of the game
	cout<<"Choose game number 75 if you want to buy a challenging game:"<<"|\t|"<<"The price of the game is 70$"<<endl;
	cout<<"Choose game number 27 if you want to buy a car racing game: "<<"|\t|"<<"The price of the game is 59$"<<endl;
	cout<<"Choose game number 28 if you want to buy an adventure game: "<<"|\t|"<<"The price of the game is 29$"<<endl;
	cout<<"Choose game number 78 if you want to buy a war game:        "<<"|\t|"<<"The price of the game is 99$"<<endl;
	cout<<"Choose game number 57 if you want to buy Ludo game:         "<<"|\t|"<<"The price of the game is 45$"<<endl;
	cout<<endl;
}
double pricegame (int &pgame,int &ngame){ //To calculate the cost of games
	if (pgame==75)
	return 	pgame*ngame;
	else if (pgame==27)
	{
	return 	pgame*ngame;
	}
	else if (pgame==28)
	{
	return 	pgame*ngame;
	}
	else if (pgame==78)
	{
	return 	pgame*ngame;
	}
	else if (pgame==57)
	{
	return 	pgame*ngame;
	}
	return 0;
}
void search (int x[],int size,int item){ //To search for a game and if it is found, tell me which package it is in
	size=5;
	int i;
	cout<<"enter the number of the game that you selscted :  "<<endl;
	cin>>item;
	for(int i = 0; i < size; ++i ){
	if(x[i] == item){
	cout<<"The game is available in a bundle: "<<i+1<<endl;
	cout<<"________________________________________________________________________";
	break;
	}
	else
	cout<<"The game is not available"<<endl;
	break;
}
}

int main(){
//	a file to include name and the emile of the employee and the branches to make it easier to the manegers 
	appfile.open("branch.txt",ios::app);
	
	string alll[]={"ID", "name" , "DOB", "gender","phone","email","gitHub","Linked in"};
	const int size1=30;
    const int size2=8;
    data worker[size1];
	string the_answer,answer,sugg,data;
	int marks,num;
	double markss;
	char choice;
	int choose;
	ptr = &choose;
	cout<<"***Welcome to X-game company***"<<endl;
	do{
	Menu();
    cin >> choice;
    if (choice == 'A' || choice == 'a') // A If you want to apply for a job B if  you are a customer
    {
	do{
    cout<<"\nchoose from these jobs :\n"<<
    "1- programmer\n2-game desighner\n3-2D artist\n:";
    cin>>choose;
	}while(choose != 1 &&choose !=2&&choose !=3);
	marks =Questions();
	if (marks>=80){
	data_employee(worker,size1, alll, size2);
	data_employee(worker);
	exam_mark();
	
}
	else
	cout<<"\nsorry you did not pass the admission requirements !";
	choice = 'e';
	
}
	
    else if(choice=='B' || choice =='b')
    {
	cout<<"do you want to: \n1- buy a game\n2- send complaints and suggestions \n3- Read about the company: "<<endl;
	cout<<endl;
	cout<<"<<<<enter your choise";
	cin>>num;
	if(num == 1){
	int pgame,ngame,menu1;
	cout<<"enter number one if you want to see a list of games with prices"<<endl;
	cin>>menu1;
    while (menu1!=1)
    {
	cout<<"try again "<<endl;
		cout<<"enter number one if you want to see a list of games with prices"<<endl;
	    cin>>menu1;
    }
	menu();
	cout<<"Enter the number of the game you want to buy"<<endl;
	cin>>pgame;
    while(pgame != 75 && pgame != 27&&pgame != 28&&pgame != 78&&pgame != 57){

	cout<<"Enter the number of the game you want to buy"<<endl;
    cin>>pgame;
    }
	cout<<"How many copies do you want to buy of this game?"<<endl;
	cin>>ngame;
	cout<<"The total cost of your purchases is:\n"<<pricegame ( pgame, ngame);
	cout<<endl;

	const int gsize=5;
	int x[gsize]={75,27,28,78,57};
	int item;
	search (x,gsize,item);

	}
	else if (num==2){ 
	
	ofstream outfile; // Writing suggestions and complaints
	outfile.open("suggestions.txt",ios::app);


	if(outfile.is_open() || outfile.is_open()==true){
	
	 	
	 cout<<"Tell us about your suggestions and opinions"<<endl;
	 cin>>sugg;
	 outfile<<sugg<<endl;
	 cout<<"Thanks for your opinion";
					}
	
	outfile.close();
	appfile.close();						
	}
	}

	else if (num==3) {
	
	ifstream infile; //Read about the company
	infile.open ("information.txt");

	if (infile.is_open() || infile.is_open()==true)
	{

 	while (!infile.eof()){

	getline (infile,data);
	cout<<data<<endl;
	}
	}
	else 

	cout<<"The file did not open";
	
	infile.close ();
}}
while (choice != 'e');

	return 0;
	
}
