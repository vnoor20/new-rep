// #include <stdio.h>
// int main()
// {
//     float a=2.2,b=3.2;
//     printf("%f\n%f",a+b,a*b);
// }


// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     if (n>0){
//         printf("Positive");
//     }
//     else if (n<0){
//         printf("Negative");
//     }
//     else{
//         printf("Zero");
//     }
// }


// #include <stdio.h>
// int main()
// {
//     int a=17,b=30;
//     if (a>b){
//         printf("%d is greatest",a);
//     }
//     else{
//         printf("%d is greatest",b);
//     }
// }


// #include <stdio.h>
// int main()
// {
//     int a=7,b=17,c=11;
//     if(a<b & a<c){
//         printf("%d is smallest",a);
//     }
//     else if(b<a & b<c){
//         printf("%d is smallest",b);
//     }
//     else{
//         printf("%d is smallest",c);
//     }
// }


// #include <stdio.h>
// int main()
// {
//     int n,m=1,i;
//     scanf("%d",&n);
//     for(i=2;i<=n;i++){
//         m=m*i;
//     }
//     printf("%d",m);
// }


// #include <stdio.h>
// int main()
// {
//     int n,i;
//     scanf("%d",&n);
//     for(i=2;i<=n;i+=2){
//         printf("%d\n",i);
//     }
// }


// #include <stdio.h>
// int main()
// {
//     int n,i,flag=1;
//     scanf("%d",&n);
//     for(i=2;i<n;i++){
//         if(n%i==0){
//             flag=0;
//             break;
//         }
//     }
//     if (flag==0 & n!=0 || n==1){
//         printf("Not Prime");
//     }
//     else{
//         printf("Prime");
//     }
// }



// #include <stdio.h>
// int main()
// {
//     int n,ld,rev=0;
//     scanf("%d",&n);
//     while(n!=0){
//         ld=n%10;
//         rev=rev*10+ld;
//         n=n/10;
//     }
//     printf("%d",rev);
// }


// #include <stdio.h>
// int main()
// {
//     int n,i,j,k;
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         k=1;
//         for(j=0;j<=i;j++){
//             printf("%d  ",k);
//             k=k+2;
//         }
//         printf("\n");
//     }
// }


// #include <stdio.h>
// int main()
// {
//     int n,i,j,k;
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         k=65+i;
//         for(j=0;j<=i;j++){
//             printf("%c ",k);
//         }
//         printf("\n");
//     }
// }


// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     for(int j=0;j<n;j++){
//         for(int s=0;s<=j;s++){
//             printf("   ");
//         }
//         printf("*\n");
//     }
// }


// #include <stdio.h>
// int main()
// {
//     int n,i,j;
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             printf("%d",j);
//         }
//     }
// }


// #include <stdio.h>
// int main()
// {
//     int n,k,t,ans;
//     int arr[2];
//     scanf("%d",&t);
//     for(k=0;k<t;k++){
//         for(int g=0;g<2;g++){
//             scanf("%d",&arr[g]);
//         }
//         ans=arr[0]%arr[1];
//         printf("%d\n",ans);
//     }
// }