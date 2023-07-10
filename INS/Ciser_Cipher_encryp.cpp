#include<iostream>
using namespace std;

void encrypt(char plainText[],int len,int key){
    for(int i = 0;i<len;i++){
        plainText[i] = (((plainText[i]+key)-65)%26)+65;
    }
    for(int i = 0;i<len;i++){
        cout<<plainText[i];
    }
}
void decrypt(char plainText[],int len,int key){
    for(int i = 0;i<len;i++){
        plainText[i] = ((((plainText[i]-key)-65)+26)%26)+65;
    }
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
    cout<<"Enter word :";
    char text[len];
    for (int i = 0; i < len; i++)
    {
        cin>>text[i];
    }
    cout<<endl<<"encrypt: ";
    encrypt(text,len,key);
    cout<<endl<<"decrypt: ";
    decrypt(text,len,key);
    return 0;
}