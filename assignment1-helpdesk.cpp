#include <iostream>
#include <string>
using namespace std;
int main(){
	string name = "Name ";
	string id = "vc460413677";
	cout<<" Student Name: "<<name<<endl
	     <<" Student ID  : "<<id<<endl;
	cout<<endl;     
	 
	int idNumber = 460413677 ;
	int digit2 = 0;
	digit2 = idNumber / 10000000 ;
	digit2 = digit2 % 10;
	
	int digit4 = 0;
	digit4 = idNumber / 100000 ;
	digit4 = digit4 % 10;
	
	int digit5 = 0;
	digit5 = idNumber / 10000 ;
	digit5 = digit5 % 10;
	
	int digit6 = 0;
	digit6 = idNumber / 1000;
	digit6 = digit6 % 10;
	
	int digit8 = 0;
	digit8 = idNumber / 10;
	digit8 = digit8 % 10;

	cout<<" Extracted digits: "<<digit2<<", "
	    <<digit4<<", "
		<<digit5<<", "
		<<digit6<<", "
		<<digit8<<endl;	
		cout<<endl;
	cout<<" ----- University IT Helpdesk WorkLoad Report -----"<<endl;
	cout<<" --------------------------------------------------------------------------"<<endl;
	cout<<" Unit \t\t\t Total Tickets \t Resolution Time \t Status"<<endl;
	cout<<" --------------------------------------------------------------------------"<<endl;
	
	
	int networkTickets = digit2;
	int computerLabTickets = digit4;
	int lmsTickets = digit5;
	int accountTickets = digit6;
	int hardwareTickets = digit8;
	const int minutesPerTicket = 20 ;
	
	int heavyDesks = 0;
	int moderateDesks = 0;
	int lightDesks = 0; 
	
	cout<<" Network Support:\t "<<networkTickets
	    <<"\t\t\t"<<networkTickets*minutesPerTicket;
	    	if(networkTickets>=7){
	    		cout<<"\t\t HEAVY";
	    		heavyDesks ++;
	   		 }
			else if(networkTickets>=4 && networkTickets <=6){
				cout<<"\t\t MODERATE";
				moderateDesks ++;
			}
			else if(networkTickets<4){
				cout<<"\t\t LIGHT";
				lightDesks ++;
			}
	cout<<endl;	
	
	cout<<" Computer Lab Support:\t "<<computerLabTickets
	    <<"\t\t\t"<<computerLabTickets*minutesPerTicket;
	    	if(computerLabTickets>=7){
	    		cout<<"\t\t HEAVY";
	    		heavyDesks ++;
	   		 }
			else if(computerLabTickets>=4 && computerLabTickets <=6){
				cout<<"\t\t MODERATE";
				moderateDesks ++;
			}
			else if(computerLabTickets<4){
				cout<<"\t\t LIGHT";
				lightDesks ++;
			}
	cout<<endl;	
	
	cout<<" LMS Support:\t \t "<<lmsTickets
	    <<"\t\t\t"<<lmsTickets*minutesPerTicket;
	    	if(lmsTickets>=7){
	    		cout<<"\t\t HEAVY";
	    		heavyDesks ++;
	   		 }
			else if(lmsTickets>=4 && lmsTickets <=6){
				cout<<"\t\t MODERATE";
				moderateDesks ++;
			}
			else if(lmsTickets<4){
				cout<<"\t\t LIGHT";
				lightDesks ++;
			}
	cout<<endl;	
	
	cout<<" Account Support:\t "<<accountTickets
	    <<"\t\t\t"<<accountTickets*minutesPerTicket;
	    	if(accountTickets>=7){
	    		cout<<"\t\t HEAVY";
	    		heavyDesks ++;
	   		 }
			else if(accountTickets>=4 && accountTickets <=6){
				cout<<"\t\t MODERATE";
				moderateDesks ++;
			}
			else if(accountTickets<4){
				cout<<"\t\t LIGHT";
				lightDesks ++;
			}
	cout<<endl;	
	
		cout<<" Hardware Support:\t "<<hardwareTickets
	    <<"\t\t\t"<<hardwareTickets*minutesPerTicket;
	    	if(hardwareTickets>=7){
	    		cout<<"\t\t HEAVY";
	    		heavyDesks ++;
	   		 }
			else if(hardwareTickets>=4 && hardwareTickets <=6){
				cout<<"\t\t MODERATE";
				moderateDesks ++;
			}
			else if(hardwareTickets<4){
				cout<<"\t\t LIGHT";
				lightDesks ++;
			}
	cout<<endl;	
	cout<<endl;
	cout<<" ===== SUMMARY ====="<<endl;
	cout<<" LIGHT desks\t: "<<lightDesks<<endl
		<<" MODERATE desks : "<<moderateDesks<<endl
		<<" HEAVY desks\t: "<<heavyDesks<<endl;
	
}	
	
