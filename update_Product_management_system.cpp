#include<iostream>
#include<fstream>
#include<cmath>
#include<string>
#define size 10
using namespace std;

struct p{
    int serialNum;
    int quantity;
    double totalSales;
    double price;
};


void GetIndexOfHighestSales(p po[],int n){
    int max=po[0].totalSales;
    int maxindex=0;
    for(int i=1;i<n;i++){
        if(max<po[i].totalSales){
            max=po[i].totalSales;
            maxindex=i;//هنا بنخزن الاندكس بتاع المنتج اللي عنده اعلى مبيعات      
        }
    }
    cout<<"Product with the highest sales is : "<<maxindex+1<<endl;//
 //   بترجع رقم المنتج اللي عنده اعلى مبيعات  
}

void displayProduct(p po[],int n){
for(int i=0;i<n;i++){
    cout<<"Product #"<<i+1<<endl;
    cout<<"Serial num : "<<po[i].serialNum<<endl;
    cout<<"quantity : "<<po[i].quantity<<endl;
    cout<<"sales : "<<po[i].totalSales<<endl;
    cout<<"price : "<<po[i].price<<endl;
}


}






void inputProducts(p po[],int &n){
   
cout<<"Please enter the number of products:";cin>>n;cout<<endl;
cout<<"Please enter the "<<n<<" products:"<<endl;
for(int i=0;i<n;i++){
    cout<<"Enter values of product "<<"# "<<i+1<<endl;
    cout<<"Serial Number : ";
    cin>>po[i].serialNum;cout<<endl;
    cout<<"quantity : ";
    cin>>po[i].quantity;cout<<endl;
cout<<"sales :";
cin>>po[i].totalSales;cout<<endl;
cout<<"Price : ";cin>>po[i].price;cout<<endl;
}}

void priceLessThan(p po[],int n,int amount,int& count )
{
count=0;
    for(int i=0;i<n;i++){
if(po[i].price<amount){
    count++;
}
}
cout<<"Number of products with price less than "<<amount<<" is : "<<count<<endl;

}








void ProductsLessThan(int quant,p po[],int n){
   
    for(int i=0;i<n;i++){
        if(po[i].quantity<quant){
            cout<<"Product "<<po[i].serialNum<<endl;;
        }
    }
}
void discount(p po[],int n){
for(int i=0;i<n;i++){
    if(po[i].quantity<6){
        po[i].price*=0.5;
    }

}
cout<<"Discount  applied : "<<endl;
}






int main(){
     p product[size];
    int num,amou,cou;
    char c;

    inputProducts(product,num);
int choice;int q;do{
cout<<"Please enter a number:"<<endl;
cout<<"Press 1 to get products that has less quantity than a certain value"<<endl;
cout<<"Press 2 to Get Product with the highest sales"<<endl;
cout<<"Press 3 to Apply 50%"<<"discount for products that have quantity less than 6"<<endl;
cout<<"Press 4 to count the number of products with prices less than a certain amount"<<endl;
cout<<"Press 5 to Display all the products"<<endl;

cin>>choice;
if(choice==1){
 cout<<"Serial Numbers of the Products that has less quantity than a value entered by the user:"<<endl;
            cout<<"Please enter the quantity:";
    cin>>q;
 
 
    ProductsLessThan(q,product,num);   


}
if(choice==2){
GetIndexOfHighestSales(product,num);
}
if(choice==3){
    discount(product,num);
}
if(choice==4){
    cout<<"Enter the amount : ";cin>>amou;
    priceLessThan(product,num,amou,cou);
}
if(choice==5){
displayProduct(product,num);
}
cout<<"Do you want to Apply Another function, Press 'Y' or 'y' for yes, any other key to stop : ";cin>>c;
}while(c=='y'||c=='Y');

system("pause");
}

