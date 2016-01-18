#include <signal.h>
#include <string>
#include <iostream>
#include "TTTQ.h"

static volatile bool run = true;
void quitHandler(int){
	run = false;
}
int main(int argc, char* argv[]){
	signal(SIGINT, quitHandler);
	int MAX_ITER=10;
	if(argc==2)
		MAX_ITER=std::atoi(argv[1]);
	TTTQ q;
	q.init(3,3);
	for(int i=0;i<MAX_ITER && run;++i){
		std::cerr << i << std::endl;
		q.advance(1);
	}
	std::cerr << "COMPLETE!" << std::endl;
	q.print();
	std::cout << std::endl;
	q.printPolicy();
	std::cout << "QHATSIZE : " << q.size() << std::endl;
//	std::cout << q.size() << std::endl;
}
