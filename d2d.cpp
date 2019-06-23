#include<iostream>
#include<fstream>
using namespace std;
int main(){
int num1,num2,i,j,m,n;
ifstream fileInput;
fileInput.open("input.txt");
fileInput>>num1>>num2;
int** arr=new int*[num1];

for(i=0;i<num1;i++){
    arr[i]=new int[num2];
}
for(i=0;i<num1;i++){
    for(j=0;j<num2;j++)
    {
        fileInput>>arr[i][j];
    }
}
ofstream fileOutput;
fileOutput.open("Output.txt",ios::app);
for(i=0;i<num1;i++){
    for(j=0;j<num2;j++)
    {
        fileOutput<<arr[i][j]*2;
    }
}


  return 0;
}
