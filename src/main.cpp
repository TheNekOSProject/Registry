#include <iostream>
#include <string>

void cprint(std::string msg)
{
  std::cout << msg << std::endl;
}

void prompt()
{

  bool keep_alive = 1;
  std::string cmd;
  while (keep_alive)
  {
    std::cout << "[nreg] >";
    std::cin >> cmd;

    if (cmd == "q"){keep_alive = 0; break;}
  }

}

int main (int argc, char *argv[]) {
  prompt();
  return 0;
}
