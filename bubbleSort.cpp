/*

BUBBLE SORT  program
CREAT BY VINIT SAINI
ROLL No 17309140270


*/
#include<iostream>
using namespace std;
void sort(int,int);
int main()
{
	int a[5],n,i;
	cout<<"Size  of array:";
	cin>>n;

	cout<<"enter element:";
	for(i=0;i<n;i++)
	{
		cout<<"\a["<<i+1<<"]=";  cin>>a[i];
	}

	cout<<"before sorting";
	 for(i=0;i<n;i++)
	 {
	 	cout<<"\na["<<i+1<<"]="<<a[i];
	 }

	void sort(int a,int n);

	cout<<"\nafter sorting";
	 for(i=0;i<n;i++)
	 {
	 	cout<<"\na["<<i+1<<"]="<<a[i];
	 }
}
void sort(int a[],int n)
{
	int i,j,item;
for(i=0;i<n;i++)
  {

	for(j=0;j<n-i-1;j++)
	   {

	   	if(item>a[i])
	   	  {


	   	  	item=a[i];
	   	  	a[i]=a[i+1];
	   	  	a[i+1]=item;


		  }

	   }

  }



}
