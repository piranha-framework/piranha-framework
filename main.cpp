#include "server-container/listener.hpp"

int main(void) {
	piranha::listener * listener_obj = new piranha::listener();
	listener_obj->start_listen();
}