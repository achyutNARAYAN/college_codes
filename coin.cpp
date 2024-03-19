#include<iostream>
#include<vector>
using namespace std;

int findCounterfeitCoinPosition(vector<int>& coins, int left, int right) {
if(left==right)
return left;
int n=right-left+1;
int mid=left+(n/2);
int leftSum=0;
for(int i=left;i<mid;++i)
leftSum+=coins[i];
int rightSum=0;
for(int i=mid;i<=right;++i)
rightSum+=coins[i];
if(leftSum<rightSum)
return findCounterfeitCoinPosition(coins,left,mid-1);
else if(leftSum>rightSum)
return findCounterfeitCoinPosition(coins,mid,right);
else
return -1;
}

int main() {
int n;
cout<<"Enter the number of coins: ";
cin>>n;
vector<int>coins(n);
cout<<"Enter the weights of the coins: ";
for(int i=0;i<n;++i) {
cin>>coins[i];
}
int counterfeitPosition=findCounterfeitCoinPosition(coins,0,n-1);
if(counterfeitPosition!=-1)
cout<<"The counterfeit coin is at position: "<<counterfeitPosition+1<<endl;
else
cout<<"No counterfeit coin found!"<<endl;
return 0;
}