#include<iostream>
using namespace std ;
int main(){
char a,b,c ;
cout<<"Enter three characters: ";
cin>>a>>b>>c;
if((b=='<'&&a<c)||(b=='>'&&a>c)||(b=='='&&a==c)){
    cout<<"yes"<<endl;
}
else{
    cout<<"no"<<endl;
}
system("pause");
return 0;

}