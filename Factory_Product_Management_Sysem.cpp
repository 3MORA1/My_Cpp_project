#include<iostream>
#include<fstream>
#include<cmath>
#include<string>
using namespace std;
struct p{
    int serialNum;
    int quantity;
    double totalSales;
    double price;
};
 p product[4];

void GetIndexOfHighestSales(){
    int max=product[0].totalSales;
    int maxindex=0;
    for(int i=1;i<4;i++){
        if(max<product[i].totalSales){
            max=product[i].totalSales;
            maxindex=i;   ///هنا الاول مش هحطه لاني حطيته في ال max فهبدا الloop من 1 واقارن وفي الاخر ارجع maxindex+1 هيرجع المنتج التاني عشان لو هو هو ب  1 
        }
    }
cout<<"Product with the highest sales is: "<<maxindex+1<<endl;
}

void displayProduct(){
for(int i=0;i<4;i++){
    cout<<"Product #"<<i+1<<endl;
    cout<<"Serial num : "<<product[i].serialNum<<endl;
    cout<<"quantity : "<<product[i].quantity<<endl;
    cout<<"sales : "<<product[i].totalSales<<endl;
    cout<<"price : "<<product[i].price<<endl;
}


}






void inputProducts(){
   
cout<<"Please enter the four products:"<<endl;
for(int i=0;i<4;i++){
    cout<<"Enter values of product "<<"# "<<i+1<<endl;
    cout<<"Serial Number : ";
    cin>>product[i].serialNum;cout<<endl;
    cout<<"quantity : ";
    cin>>product[i].quantity;cout<<endl;
cout<<"sales :";
cin>>product[i].totalSales;cout<<endl;
cout<<"Price : ";cin>>product[i].price;cout<<endl;
}}




void ProductsLessThan(int quant){
   
    for(int i=0;i<4;i++){
        if(product[i].quantity<quant){
            cout<<"Product "<<product[i].serialNum<<endl;;
        }
    }
}
void discount(){
for(int i=0;i<4;i++){
    if(product[i].quantity<6){
        product[i].price*=0.5;
    }

}
cout<<"Discount Applied."<<endl;
}






int main(){char c;
    inputProducts();
int choice;int q;do{
cout<<"Please enter a number:"<<endl;
cout<<"Press 1 to get products that have less quantity than a certain value"<<endl;
cout<<"Press 2 to Get Product with the highest sales"<<endl;
cout<<"Press 3 to Apply 50%"<<"discount for products that have quantity less than 6"<<endl;
cout<<"Press 4 to Display all the products"<<endl;
cin>>choice;
if(choice==1){
 cout<<"Serial Numbers of the Products that has less quantity than a value entered by the user:"<<endl;
            cout<<"Please enter the quantity:";
    cin>>q;
 
 
    ProductsLessThan(q);   


}
if(choice==2){
GetIndexOfHighestSales();
}
if(choice==3){
    discount();
}
if(choice==4){
displayProduct();
}
cout<<"Do you want to Apply Another function, Press 'Y' or 'y' for yes, any other key to stop : ";cin>>c;
}while(c=='y'||c=='Y');

system("pause");
}

