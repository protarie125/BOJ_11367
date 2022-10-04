#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto n = int{};
	cin >> n;
	while (0 < (n--)) {
		auto s = string{};
		auto g = int{};
		cin >> s >> g;

		cout << s << ' ';

		if (g < 60) {
			cout << "F\n";
		}
		else if (g < 67) {
			cout << "D\n";
		}
		else if (g < 70) {
			cout << "D+\n";
		}
		else if (g < 77) {
			cout << "C\n";
		}
		else if (g < 80) {
			cout << "C+\n";
		}
		else if (g < 87) {
			cout << "B\n";
		}
		else if (g < 90) {
			cout << "B+\n";
		}
		else if (g < 97) {
			cout << "A\n";
		}
		else {
			cout << "A+\n";
		}
	}

	return 0;
}