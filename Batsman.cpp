#include<iostream>
#include"Batsman.h"
using std::string;
using std::cout;
using std::endl;

namespace example
{
  Batsman::Batsman(){
          
             Runs_scored=0;
             Balls_faced=0;
             No_of_fours=0;
             No_of_sixes=0;
             Strike_rate=0;
  }
        
void Batsman:: Enter_batsman_details(string n,int r,int b,int f,int s){
            
            Name=n;  Runs_scored=r;  Balls_faced=b;  No_of_fours=f; No_of_sixes=s; 
         Strike_rate=(float)Runs_scored/Balls_faced;
            Strike_rate = Strike_rate*100;
         
        }
        
 void  Batsman::update_batsman_details(Batsman Bat[],string n,int r,int b,int f,int s){

     for(int j=1;j<12;j++){
            if(n==Bat[j].Name){
              Bat[j].Runs_scored=r;     Bat[j].Balls_faced=b;    
              Bat[j].No_of_fours=f;    Bat[j].No_of_sixes=s; 
             Bat[j].Strike_rate=(float)Runs_scored/Balls_faced;
         
                 Bat[j].Strike_rate = Strike_rate*100;
                 break;
              }
        }

        }
  
        
  void Batsman::Delete_Batsman_details(int n,Batsman Bat[]){
              for (int c = n; c < 11; c++)
         Bat[c] = Bat[c+1];
         
     }
          void  Batsman::display(Batsman serial){
                cout<<serial.Name<<'\t'<<serial.Runs_scored<<'\t'<<serial.Balls_faced<<'\t'<<
      serial.No_of_fours<<'\t'<<serial. No_of_sixes<<'\t'<<serial.Strike_rate<<endl;
          }
        

        int Batsman::Total_Score(Batsman bat[]){int total=0;
             for(int i=1;i<12;i++){total+=bat[i].Runs_scored;}
             return total;
 }

 };
 







