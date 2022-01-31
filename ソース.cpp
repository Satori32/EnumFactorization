#include <iostream>
#include <vector>

typedef std::vector<std::size_t> DType;
typedef std::vector < std::vector < std::size_t>> RType;

RType MakeHoge(std::size_t N) {

	RType R;

	for (std::size_t i = 1; i <= N; i++) {
		DType D;
		std::cout << i << ",";
		for (std::size_t j = 2; j <= ((i / 2) + 1); j++) {

			if (i % j == 0) {
				//D.push_back(i / j);
				D.push_back(j);
			}

		}
		if (D.size() == 0) { D.push_back(i); }
		R.push_back(D);
	}

	std::cout << std::endl;
	return R;
}

bool Show(RType& R) {
	std::size_t i = 1;
	for (auto& oo : R) {
		std::cout << i << ":";
		for (auto& o : oo) {
			std::cout << o << ",";
		}
		i++;
		std::cout << std::endl;
	}

	return true;
}

int main() {
	std::size_t L = 10000;
	//std::size_t L =16;
	auto R = MakeHoge(L);

	Show(R);

}