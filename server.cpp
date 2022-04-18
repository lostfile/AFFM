#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>
// we are going to use this port
using namespace std;

// comand line vars
int main(int argc,char* argv[]) {
  int gport,ip;
// this will be our nick name
  string name = argv[3];
// the ip address and port number
  ip = argv[1];
  gport = argv[2];
  
  
}
