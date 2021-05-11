#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct kisi{
	char ad[100];
	char soyad[100];
	int yas[100];
};
int main(){
	int i,j,k,gecici;
	for (i=0;i<100;i++){
	scanf("%d",&ad[i]);
	scanf("%d",&soyad[i]);
	scanf("%d",&yas[i]);
}
    for(j=0;j<100;j++){
    	for(k=0;k<j+1;j++){
    			if (soyad[j]>soyad[i]){
    				gecici = soyad[j];
    				soyad[j] = soyad [i];
    				soayd[i] = gecici ; 
				}		
		}
    
	}
for(int a=0;a<100;a++){
	printf("AD: % d, Soyad: % d ,Yas: % d ",ad[a],soyad[a],yas[a]);
}
return 0;
}
