#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int n = 1e4;
map<int,int>m;
vector<vector<int>> merge(vector<vector<int>>& intervals) {
    vector<vector<int>>ans;
    vector<int>temp;
      for (int i = 0; i < n; i++)
      {
          m[i] = 0;  // insert in maop 
        //   m.insert({i,0});
      }

      for(int i=0;i<intervals.size();i++){
          int first = intervals[i][0];
          int second = intervals[i][1];
          for (int i = first; i <= second; i++)
          {
              m[i]++;  // increase to one or two 
          }

      }

int prev =0;
    for(int i=0;i<=n;i++){

        if(prev==0 && m[i]==0)
        continue;

        if(prev!=0 && m[i]==0){
            temp.push_back(i);
            ans.push_back(temp);
            temp.pop_back();
            temp.pop_back();
        }
       if(m[i]>=1 && prev==0){
           temp.push_back(i);
           prev = m[i];
           continue;
       } 
       if(m[i]>=1 && prev!=0){
           prev = m[i];
           continue;
       }




    }
        return ans;
    }
int main(){
    vector<vector<int>>intervals;
    intervals = {{1,3},{2,6},{6,8}};
    vector<vector<int>>ans = merge(intervals);
    
    for(int i=0;i<ans.size();i++){
        cout<<ans[i][0]<<","<<ans[i][1]<<endl;
    }
return 0;
}