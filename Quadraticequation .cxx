#include<iostream>
using namespace std;
int main()
{
	int a, b, c,det,complex;
	float x1,x2,complexroot;
	
	cout<<"PROGRAM TO CALCULATE  QUADRATIC EQUATION"<<endl;
   cout<<" "<<endl;
   cout<<" By Ibrahim Mohammed"<<endl;
    cout<<" "<<endl;
      cout<<"Equation of the form ax² + bx + c"<<endl;
		
	cout<<"Enter the value  of a :";
	cin>>a;
	cout<<"Enter the value  of b :";
	cin>>b;
	cout<<"Enter the value  of c : ";
	cin>>c;
	det=(b*b)-(4*a*c);
	if(det>=0){
		   det= (det)^(1/2);
		   x1= (-b+det)/2*a;
			x1= (-b-det)/2*a;
			cout<<"x="<<x1<<" "<<"or"<<"                         "<<x2<<endl;
	
        }
  else{
	     cout<<"Determinant less than zero"<<endl;
	    cout<<"Complex root"<<endl;
        complex=-1*(det);
        complexroot =(complex)^(1/2);
       x1= (-b+det)/2*a;
		x1= (-b-det)/2*a;
	if((x1==0 )&& (x2==0)){
	cout<<"x="<<"  "<<x1<<"  "<<"or"<<"  "<<x2<<endl;
	
}	
	else if ((x1==0 )&&(x2!=0)){
	    
	  	cout<<"x="<<"  "<<x1<<"  "<<"or"<<"  "<<x2<<"i"<<endl;  
	    
	    }
	else if ((x1!=0 )&&( x2==0)){

		cout<<"x="<<"  "<<x1<<"i"<<"  "<<"or"<<"  "<<x2<<endl;
		
				}
				
	else{

		cout<<"x="<<"  "<<x1<<"i"<<"  "<<"or"<<"  "<<x2<<"i"<<endl;
		
				}
	
	
}
}