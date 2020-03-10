#include<stdio.h>
#include<stdlib.h> 
#include<string.h>
#include<windows.h>

int main(){
	char buf[2048];
	FILE*fp;
	int len;
	for(int i=1;i<=174;i++){
		char file[174];
		 sprintf(file,"×Ö·ûÍ¼ÎÄ±¾\\%d.txt",i);
		 fp=fopen(file,"r");
	    while(fgets(buf,2048,fp)!=NULL){
	    len=strlen(buf);
		buf[len-1]='\0';
		printf("%s\n",buf);
		
	     }
	     if(i!=174){
	     		system("cls");
		 }
	   
	}
	

	return 0;
}
