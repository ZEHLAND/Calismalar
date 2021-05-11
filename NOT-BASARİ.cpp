#include<stdio.h>
#include<stdlib.h>
using namespace std;
int j,sayac=0 ;
double ort=0; 
int ortalama_bul(int *deger){
	  for(j=0;j<sayac;j++){
	 	ort = ort + deger[j];
	 	printf("%d",deger[j]);
		 }
		 ort = ort / sayac ;
		 return ort;
}
int main(){
	int n,i,k,a;
	int *x,*y;
	printf("kac ogrencinin basari notu girilecek :");
	scanf("%d",&n);
	 x = (int *)  malloc( sizeof(int)*n );
	 printf("basarili notlarin giris islemi : ");
	 for(i=0;i<n;i++){
	 	scanf("%d",&x[i]);
	 }
	  for(j=0;j<n;j++){
	 	if(x[j]>=60){
	 		sayac = sayac + 1;
		 }
	 }
	 y = (int *)  malloc( sizeof(int)*sayac );
	 
	 for(k=0;k<n;k++){
	 	if(x[k]>=60){
	 		for(a=0;i<sayac;i++){
	 		  y[a]=x[k];
			 }
	 	
		 }
	 }
	 ortalama_bul(&y[100]);
	 printf("ortalama = %f",ort);
	
}
