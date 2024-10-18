//FUNCTION PROTOTYPE
/*
Purity Thuo
15/10/24
*/
#include<stdio.h.>
#include<math.h>
float unitsConsumed(float a,float b,float c,float d);
float totalbill;


int main(){
	 char customerName[10];
	 int customerID;
	 float unitConsumed , totalbill, a,b,c,d;
	 
	 
printf("enter customerID");
scanf("%d",&customerID);

printf("enter customerName");
scanf("%s[^\n]",&customerName);

printf("enter UnitConsumed");
scanf("%f",&unitConsumed);

 a=1.20;
 b=1.50;
 c=1.80;
 d=2.00;
 
 if(unitConsumed<=83.4){
 totalbill= 100;
	 return totalbill;}
	 
  else if(unitConsumed<=199){
 totalbill= unitConsumed *a;
	 return totalbill;}
	
   else if(unitConsumed<400){
	 	totalbill= unitConsumed *b;
	return totalbill;}
	
	
	else if(unitConsumed<600){
		totalbill= unitConsumed *c;
	return totalbill;
	}
	
	
		else if(unitConsumed>600){
			totalbill= unitConsumed *d;
		return totalbill;
	}
	
 }


	 
