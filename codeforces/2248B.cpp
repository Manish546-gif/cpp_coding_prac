#include <iostream>
#include <vector>
#include <algorithm>
 
int main(){
  
 
  int t;
  std::cin>>t;
 
  while (t--) {
    
    std::vector<long long> arr,brr;
    int n,m;
    std::cin>>n>>m;
    
    for (int i = 0; i < n; i++) {
      long long a;
      std::cin>>a;
      arr.push_back(a);
    }
 
    for (int i = 0; i < m; i++) {
      int b;
      std::cin>>b;
      brr.push_back(b);
    }
 
    std::sort(arr.begin(),arr.end());
    std::sort(brr.begin(),brr.end());
 
    if(n/2<m){
      std::cout<<"NO\n";
    }
    else{
      bool ans=true,hans=true;
     for (int i = m-1; i>=0; i--) {
 
          if(arr[i+n-m]<brr[i]){
            ans=false;
          }
          
        }
 
        for(int i=0;i<m;i++){
          if(arr[i]>brr[i]){
            hans=false;
          }
        }
 
 
 
        if(hans && ans){
          std::cout<<"YES\n";
        }
        else{
          std::cout<<"NO\n";
        }
      
 
 
      
    }
 
 
 
  }
 
  return 0;
}