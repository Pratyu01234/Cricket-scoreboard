#include"Batsman.h"
#include<iostream>
using std::string;
using std::cout;
using std::endl;
using example::Batsman;
using  namespace std;
int main(){

  Batsman player[12];
  int static i=1; 

  do{ cout<<'\n';cout<<"Select any one option"<<endl;
      cout<<"(1) Enter_batsman_details"<<endl; cout<<"(2) update_batsman_details "<<endl;
       cout<<"(3) Delete_Batsman_details "<<endl; cout<<"(4) display"<<endl;  
     
      int choice;cin>>choice;
      
      switch(choice){
    
case 1: 
      
     {cout<<"Name : "; string name; cin.ignore();getline(cin,name);
       cout<<"Runs Scored : ";int runs; cin>>runs;
      cout<<"Balls faced : "; int balls_faced; cin>>balls_faced;
       cout<<"fours : "; int fours; cin>>fours;
      cout<<"sixes : "; int sixes; cin>>sixes; 
       
 
      
       player[i].Enter_batsman_details(name,runs,balls_faced,fours,sixes);
       i++;break;
       } 
  
 
case 2:
      
      {cout<<"Name : "; string name; cin.ignore(); getline(cin,name);
       cout<<"Runs Scored : ";int runs; cin>>runs;
      cout<<"Balls faced : "; int balls_faced; cin>>balls_faced;
       cout<<"fours : "; int fours; cin>>fours;
      cout<<"sixes : "; int sixes; cin>>sixes;
       
      player[i].update_batsman_details(player,name,runs,balls_faced,fours,sixes);
       break;
      }
      
      
case 3:

       {cout<<"Serial no. of player : "; int n; cin>>n; 
  
       player[i].Delete_Batsman_details(n,player);
        i--; break;}

 case 4:
 
     cout<<"Serial no."<<'\t'<<"NAME"<<'\t'<<"RUNS"<<'\t'<<"BALLS"<<'\t'<<"FOURS"<<'\t'<<"SIXES"<<'\t'<<"STRIKE RATE"<<endl;
       for(int j=1;j<12;j++) {
      cout<<'\t'<<j<<'\t'; player[i].display(player[j]);}  

}}

while(i<11);
}