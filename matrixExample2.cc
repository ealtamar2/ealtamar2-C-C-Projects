#include<iostream>
#include<numeric>
int v[10][10],f,c,i,j,cp=0,ci=0;
using namespace std;
void main()

{
	cout <<"digite numero de filas "; cin >>f;
	cout <<"digite numero de columnas "; cin >>c;
for(i=1;i<=f;i++)
{
	for(j=1;j<=c;j++)
	{
		cout <<"v["<<j<<","<<i<<"]="; cin >> v[j][i];
	}
}
cout <<"***************la matriz creada es*************" <<endl;
for(j=1;j<=c;j++)
{
	for(i=1;i<=f;i++)
	{
		cout <<v[j][i]<<" ";
	}
	cout <<endl;
}
cout <<"***********el recorrido de la matriz es**************" <<endl;
cout <<"__________>" <<endl;
cout <<"__________>" <<endl;
cout <<"__________>" <<endl;
cout <<"__________>" <<endl;
for(i=1;i<=f;i++)
{
	for(j=1;j<=c;j++)
	{
		if(v[j][i]%2==0)
		{
			cp=cp+1;
		}
		else
		{
			ci=ci+1;
		}
	}
}
cout <<"hay "<<cp<<"numeros pares" <<endl;
cout <<"hay "<<ci<<"numeros impares" <<endl;
system("pause");
}

