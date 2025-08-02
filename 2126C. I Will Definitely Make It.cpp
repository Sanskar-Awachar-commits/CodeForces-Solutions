#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <vector>

using namespace std;
using ll = long long;

struct State {
    ll time;
    int height_idx;
    bool operator>(const State &other) const {
        return time > other.time;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<ll> h(n);
        map<ll, int> h_map;
        vector<ll> unique_h;
        ll h_max = 0;
        for (int i = 0; i < n; ++i) {
            cin >> h[i];
            if (h_map.find(h[i]) == h_map.end()) {
                h_map[h[i]] = unique_h.size();
                unique_h.push_back(h[i]);
            }
            if (h[i] > h_max) {
                h_max = h[i];
            }
        }
        sort(unique_h.begin(), unique_h.end());
        vector<int> new_h_map(unique_h.size());
        for (int i = 0; i < unique_h.size(); ++i) {
            new_h_map[h_map[unique_h[i]]] = i;
        }
        for (int i = 0; i < unique_h.size(); ++i) {
            h_map[unique_h[i]] = i;
        }
        int start_h_idx = h_map[h[k - 1]];
        int max_h_idx = h_map[h_max];
        vector<ll> dist(unique_h.size(), -1);
        priority_queue<State, vector<State>, greater<State>> pq;
        dist[start_h_idx] = 0;
        pq.push({0, start_h_idx});
        bool possible = false;
        while (!pq.empty()) {
            State current = pq.top();
            pq.pop();
            ll t_u = current.time;
            int u_idx = current.height_idx;
            if (t_u > dist[u_idx] && dist[u_idx] != -1) {
                continue;
            }
            if (u_idx == max_h_idx) {
                possible = true;
                break;
            }
            ll H_u = unique_h[u_idx];
            if (u_idx + 1 < unique_h.size()) {
                int v_idx = u_idx + 1;
                ll H_v = unique_h[v_idx];
                ll cost = H_v - H_u;
                ll t_new = t_u + cost;
                if (t_new <= H_u && t_new <= H_v - 1) {
                    if (dist[v_idx] == -1 || t_new < dist[v_idx]) {
                        dist[v_idx] = t_new;
                        pq.push({t_new, v_idx});
                    }
                }
            }
            if (u_idx - 1 >= 0) {
                int v_idx = u_idx - 1;
                ll H_v = unique_h[v_idx];
                ll cost = H_u - H_v;
                ll t_new = t_u + cost;
                if (t_new <= H_u && t_new <= H_v - 1) {
                    if (dist[v_idx] == -1 || t_new < dist[v_idx]) {
                        dist[v_idx] = t_new;
                        pq.push({t_new, v_idx});
                    }
                }
            }
        }

        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}