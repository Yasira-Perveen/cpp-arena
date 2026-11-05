#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main (){
	string name = "Student Name";
	string studentId = "vc350413677";
	int numericId = 350413677;
	cout<<" Student Name: "<<name<<endl
		<<" Student ID  : "<<studentId<<endl;
	cout<<endl;
	
	cout<<" ===== COMMUNITY WATER REFILL DEPOT - DAILY REPORT ====="<<endl
		<<endl;	
	cout<<left<<setw(8)<<" Order"<<setw(10)<<"Quantity"<<setw(20)<<"Package Type"<<setw(14)<<"Original(Rs.)"<<setw(12)<<"Discount"<<"Final(Rs.)"<<endl;
	cout<<" -------------------------------------------------------------------------"<<endl;
	const int containers = 10;
	const int discountPercentage = 10 ;
	int totalContainersSupplied = 0;
	int totalOriginalCharges = 0;
	int totalDiscount = 0;
	int amountCollected = 0;
	int orderNumber = 0;
	string salesStatus = "";
	
	
	for(int divisor = 10000 ; divisor >=1 ; divisor = (divisor/10) ){
		 orderNumber += 1;
		 int extractedDigit = (numericId/divisor) % 10 ;
		 int quantity = extractedDigit * containers ;
		 totalContainersSupplied += quantity;
		 int chargePerContainer = 0;
		 string packageType = "";
		 int originalCharge = 0;
		 int finalCharge = 0;
		 int discountAmount = 0;
		
		 
		 if (divisor >=100){
		 	 chargePerContainer = 70 ;
		 	 packageType = "5-Litre Container"; 
		 }
		 else {
		 	 packageType = "19-Litre Container";
		 	 chargePerContainer = 180 ;
		 }
		 originalCharge = quantity * chargePerContainer;
		 totalOriginalCharges += originalCharge;  
		 if (quantity >= 50){
		    discountAmount  = (originalCharge * discountPercentage) / 100;
		 	finalCharge = originalCharge - discountAmount ;
			totalDiscount += discountAmount;
		 }
		 else{
		 	finalCharge = originalCharge ;
		 }
		amountCollected += finalCharge;
		cout<<" "<<left<<setw(7)<<orderNumber<<setw(10)<<quantity
			<<setw(20)<<packageType<<setw(14)<<originalCharge
			<<setw(12)<<discountAmount<<finalCharge<<endl;
	}
	
	if (amountCollected <15000)
		salesStatus = "LOW SALES";
	
	else if (amountCollected <= 29999)
		salesStatus = "NORMAL SALES";
	
	else
		salesStatus = "HIGH SALES";
		
	
	cout<<" -------------------------------------------------------------------------"<<endl
	 	<<endl;	
	cout<<" ===== DAILY SUMMARY ====="<<endl;
	cout<<" Total Containers Supplied  : "<<totalContainersSupplied<<endl
		<<" Total Original Charges\t    : "<<"Rs. "<<totalOriginalCharges<<endl
		<<" Total Discount\t\t    : "<<"Rs. "<<totalDiscount<<endl
		<<" Final Amount Collected\t    : "<<"Rs. "<<amountCollected<<endl
		<<" Sales Status\t\t    : "<<salesStatus<<endl;
	
}

