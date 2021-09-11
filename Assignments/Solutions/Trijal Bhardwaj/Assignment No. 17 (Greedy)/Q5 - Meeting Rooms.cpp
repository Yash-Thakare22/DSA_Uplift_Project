// Question Link: https://www.interviewbit.com/problems/meeting-rooms/

int Solution::solve(vector<vector<int> >& A) {
    if (A.size() == 1)
        return 1;
    priority_queue <int, vector<int>, greater<int> > pq;
    vector<pair<int, int>> v;
    for (int i = 0; i < A.size(); i++) {
        v.push_back(make_pair(A[i][0], A[i][1]));
    }
    sort(v.begin(), v.end());
    pq.push(v[0].second);
    int j = 1;
    int cnt = 1;
    while (j < A.size()) {
        if (v[j].first < pq.top()) {
            cnt++;
            pq.push(v[j].second);
        } else if (v[j].first >= pq.top()) {
            pq.pop();
            pq.push(v[j].second);
        }
        j++;
    }
    return cnt;
}
