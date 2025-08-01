#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}

// by Sidney Angelly Sahonero Garrado

// #include <bits/stdc++.h>
// using namespace std;
// using int64 = long long;
 
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
 
//     int T; 
//     cin >> T;
//     while(T--){
//         int n; 
//         int64 k;
//         cin >> n >> k;
//         vector<int64> a(n);
//         int64 S = 0;
//         int64 Amax = 0;
//         for(int i = 0; i < n; i++){
//             cin >> a[i];
//             S += a[i];
//             Amax = max(Amax, a[i]);
//         }
 
//         // Binary‐search C in a safe range:
//         // min cost is 1, max cost might be (Amax + k) or even a bit more,
//         // but Amax + k + S is a trivial upper bound.
//         int64 lo = 1, hi = Amax + k + S;
        
//         auto count_slots = [&](int64 C){
//             // Count how many slots have cost <= C
//             int64 cnt = 0;
//             int64 limit = C - k;  // j+k <= C  ⇒  j <= C-k
//             for(int i = 0; i < n; i++){
//                 // free slots: j=1..a[i], cost=j <= C  ⇒  j <= min(a[i], C)
//                 cnt += min(a[i], C);
//                 if(limit > a[i]) {
//                     // moved slots in lane i: j=a[i]+1..limit
//                     cnt += (limit - a[i]);
//                 }
//             }
//             return cnt;
//         };
 
//         // find smallest C with count_slots(C) >= S
//         while(lo < hi){
//             int64 mid = lo + (hi - lo)/2;
//             if(count_slots(mid) >= S) hi = mid;
//             else                         lo = mid + 1;
//         }
//         int64 C = lo;
 
//         // Now compute total cost of all slots ≤ C
//         int64 total_cnt = 0;
//         int64 total_sum = 0;
//         int64 limit = C - k;
//         for(int i = 0; i < n; i++){
//             // free part: j = 1..min(a[i], C)
//             int64 m = min(a[i], C);
//             total_cnt += m;
//             total_sum += m*(m+1)/2;
 
//             // moved part: j = a[i]+1 .. limit (only if limit > a[i])
//             if(limit > a[i]){
//                 int64 L = limit;
//                 // sum of j from (a[i]+1) to L = (L*(L+1)/2) - (a[i]*(a[i]+1)/2)
//                 int64 sum_j = (L*(L+1)/2) - (a[i]*(a[i]+1)/2);
//                 int64 count_j = (L - a[i]);
//                 // each of these slots costs j + k
//                 total_sum += sum_j + k * count_j;
//                 total_cnt += count_j;
//             }
//         }
 
//         // If we picked more than S slots, drop the extra slots of cost exactly C
//         if(total_cnt > S){
//             total_sum -= (total_cnt - S) * C;
//         }
 
//         cout << total_sum << "\n";
//     }
//     return 0;
// }