#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
template <typename... Args>
void print(const Args&... args){//,char end='\n',char sep=" "){
        //cout << ' ' << ... << args;
    for(const auto& i: {args...})
        cout << sep << args;
    cout << end;
}
int main(){
	string name;
	cin >> name;
	print("Hello",name);//,end='!',sep='+');
}
