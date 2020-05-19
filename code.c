#include<stdio.h>
#include<conio.h>
int lcm(int *val,int n){
    int count=0;
   for(int i=0;i<n;i++){
       if(val[i]==1){
           count++;
       }
   }
   if(count==n){
       return 1;
   }
   else{
       int d=2,flag=0;
       while(5){
           for(int j=0;j<n;j++){
               if(val[j]%d==0){
                  flag++;
                  val[j]=val[j]/d;
               }
           }
           if(flag==0){
               d++;
           }
           else{
               break;
           }
       }
       return d*lcm(val,n);
   }

}
int main(){
    int val[3]={17,4,10};
    int ans=lcm(val,3);
    printf("%d",ans);
    return 0;
}
