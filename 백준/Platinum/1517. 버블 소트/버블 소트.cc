#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> A;
vector<int> tmp(500004, 0);
long long result = 0;
void mergesort(int S, int E){
  if(E - S < 1) {
    return;
  }

  int M = S + ((E - S) / 2);
  mergesort(S, M);
  mergesort(M + 1, E);

  for(int i = S; i <= E; i++){
    tmp[i] = A[i];
  }

  int i=S;
  int j= M + 1;
  int k = S;

  while(i <= M && j <= E){
    if(tmp[i] > tmp[j]){
      A[k] = tmp[j];
      result = result + j - k;
      j++;
      k++;
    } else {
      A[k] = tmp[i];
      i++;
      k++;
    } 
  }
  
  while(i <= M){
    A[k] = tmp[i];
    i++;
    k++;
  }

  while(j <= E){
    A[k] = tmp[j];
    j++;
    k++;
  }
};

int main(){
  cin >> n;
  for(int i = 0; i < n; i++){
    int tmp;
    cin >> tmp;
    A.push_back(tmp);
  }

  mergesort(0, n - 1);

  cout << result << '\n';

  return 0;
}