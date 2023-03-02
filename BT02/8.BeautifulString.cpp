#include <bits/stdc++.h>

#define sz(a) int((a).size())

typedef long long ll;

using namespace std;

string s;
ll ans;
ll slow() {
	set < string > q;
	for (int i = 0; i < sz(s); i++)
		for (int j = i + 1; j < sz(s); j++) {
			string nw = "";
			for (int k = 0; k < sz(s); k++)
				if (k != i && k != j)
					nw += s[k];
			q.insert(nw);
		}
	return sz(q);
}

int main() {
	cin >> s;
	for (int i = 1, len = 1, cnt = 1; i <= sz(s); i++) {
		if (i == sz(s) || s[i] != s[i - 1]) {
			ans += (cnt - 1) + (len > 1);
			len = 1;
			cnt++;
		}
		else
			len++;
	}
	for (int i = 0; i + 1 < sz(s); ) {
		if (s[i] == s[i + 1]) {
			i++;
			continue;
		}
		int len = 2;
		while(i + len < sz(s) && s[i + len] == s[i + (len % 2)])
			len++;
		ans -= (len - 2);
		i += len - 1;
	}
	cout << ans;
	return 0;
}
