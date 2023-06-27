#include<iostream>
using namespace std;

void encrypt(char plainText[],int len,int key){
    for(int i = 0;i<len;i++){
        plainText[i] = (((plainText[i]+key)-65)%26)+65;
    }cout<<endl<<"encrypt: ";
    for(int i = 0;i<len;i++){
        cout<<plainText[i];
    }
}
void decrypt(char plainText[],int len,int key){
    for(int i = 0;i<len;i++){
        plainText[i] = ((((plainText[i]-key)-65)+26)%26)+65;
    }cout<<endl<<"decrypt: ";
    for(int i = 0;i<len;i++){
        cout<<plainText[i];
    }
}
int main(){
    int key,len;
    cout<<"Enter number of letter :";
    cin>>len;
    cout<<"Enter key :";
    cin>>key;
    char text[len];
    for (int i = 0; i < len; i++)   cin>>text[i];
    encrypt(text,len,key);
    decrypt(text,len,key);
    return 0;
}