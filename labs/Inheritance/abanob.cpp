#include<iostream>
#include<array>
int main(){
std::array<int,5> list;
for(int i=0;i<5;i++){
    std::cout<<"Please enter values of list element "<<i<<std::endl;
    std::cin>>list[i];
}
std::cout<<"Please enter the key value"<<std::endl;
int key=0;
std::cin>>key;
bool found=false;
std::cout<<"searching for "<<key<<std::endl;
for(int k=0;k<5;k++){
    if(key==list[k]){
        std::cout<<"Found the true index"<<list[k]<<std::endl;
        found=true;
    }
}
if(!found)
        std::cout<<"Index not Found";
return 0;
}