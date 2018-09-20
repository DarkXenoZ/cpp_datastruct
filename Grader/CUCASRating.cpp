#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
map<string,pair<int,int> > numMap,nameMap;
vector<string> numVec,nameVec;
int main()
{
cout << std::fixed << std::setprecision(2);
int n;
scanf(" %d",&n);
for(int i=0;i<n;i++){
    int score;
    string num,name;
    cin >> num >> name >> score;
    if(numMap[num].second==0)numVec.push_back(num);
    numMap[num].first+=score;
    numMap[num].second++;
    if(nameMap[name].second==0)nameVec.push_back(name);
    nameMap[name].first+=score;
    nameMap[name].second++;
}
sort(numVec.begin(),numVec.end());
sort(nameVec.begin(),nameVec.end());
for(string st : numVec){
    cout << st << ' ' <<  (numMap[st].first + 0.0) / numMap[st].second << endl;
}
for(string st : nameVec){
    cout << st << ' ' << (nameMap[st].first+ 0.0) / nameMap[st].second << endl;
}
}
