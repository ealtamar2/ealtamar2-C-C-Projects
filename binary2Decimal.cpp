#include <iostream>				
#include <numeric>				
#include <math.h>
int n,i,V [20],acum;				
using namespace std;				
void main (){				
cout<<"Digite Longitud Del Binario: ";cin>>n;			
		for (i = 1;i <= n;i++){		
			cout<< "Escriba Binario ["<<i<<"]= ";cin>>V[i];	
		}		
	acum =0;			
	i =1;			
		while (i<=n) {		
			acum=acum+V[i]*pow((double)2,(n-i));	
			i=i+1;	
		}		
		cout<<"El deciaml es: "<<acum;
		system("pause");
}		
