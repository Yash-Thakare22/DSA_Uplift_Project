            
                                                                GREEDY ALGORITHM NOTES 
                                                                
                                                                
                                       1) For Theory : https://www.interviewbit.com/courses/programming/topics/greedy-algorithm/
                                          (Go through the tutorial. Its amazing)
                                          
                                          
                                       2) Question taken up in the session : Fractional Knapsack Problem 
                                       
                                          CODE IMPLEMENTATION : 
                                          
                                          
                                          
                                          #include <bits/stdc++.h>
                                          using namespace std;
                                          int main() 
                                          {
                                              int n;
                                              cin >> n;
                                              vector<float> w(n);
                                              vector<float> p(n);
                                              for (int i = 0; i < n; i++)
                                                  cin >> w[i];

                                              for (int i = 0; i < n; i++)
                                                  cin >> p[i];

                                              int weight;
                                              cin >> weight;

                                              vector<pair<float, int>> temp(n);
                                              for (int i = 0; i < n; i++)
                                              {
                                                  temp[i].first = p[i] / w[i];
                                                  temp[i].second = w[i];
                                              }

                                              float ans = 0;
                                              int currW = 0;
                                              sort(temp.begin(), temp.end());
                                              for (int i = n-1; i >= 0; i--)
                                              {
                                                  float val = temp[i].first;
                                                  int t_w = temp[i].second;
                                                  if (currW + t_w <= weight)
                                                  {
                                                      ans += val * t_w;
                                                      currW += t_w;
                                                  }
                                                  else
                                                  {
                                                      ans += (weight - currW) * val;
                                                      break;
                                                  }
                                              }

                                              cout << ans << endl;
                                              return 0;

                                          }


                                   
