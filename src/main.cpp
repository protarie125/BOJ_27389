#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	double n; cin >> n;

	cout << fixed << setprecision(2) << n / 4;

	return 0;
}