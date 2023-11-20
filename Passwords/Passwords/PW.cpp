#include <iostream>
#include <string>
int main() {
	std::string password;
	std::getline(std::cin, password);
	int cnt1 = 0;
	int cnt2 = 0;
	int cnt3 = 0;
	int cnt4 = 0;
	if (password.size() >= 8 && password.size() <= 14) {
		for (size_t i = 0; i != password.size(); i++) {
			if (password[i] >= 33 && password[i] <= 126) {
				if (password[i] >= 65 && password[i] <= 90) {
					cnt1 = 1;
					std::cout << std::endl << "cnt1: " << cnt1 << std::endl;;
				}
				else if (password[i] >= 97 && password[i] <= 122) {
					cnt2 = 1;
					std::cout << "cnt2: " << cnt2 << std::endl;;
				}
				else if (password[i] >= 48 && password[i] <= 57) {
					cnt3 = 1;
					std::cout << "cnt3: " << cnt3 << std::endl;;
				}
				else if (password[i] < 48 || (password[i] > 57 && password[i] < 65) || (password[i] > 90 && password[i] < 97) || password[i] > 122) {
					cnt4 = 1;
					std::cout << "cnt4: " << cnt4 << std::endl;;
				}
			}
			else {
				break;
			}
		}
	}
	if ((cnt1 + cnt2 + cnt3 + cnt4) >= 3) {
		std::cout << "YES";
	}
	else {
		std::cout << "NO";
	}

}