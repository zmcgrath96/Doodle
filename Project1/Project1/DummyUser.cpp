#include "User.h"

User::User(std::string name, bool isAdmin) {
	this->name = name;
	admin = isAdmin;
}
std::string User::getName() {
	return name;
}
bool User::isAdmin() {
	return admin;
}
void User::addAvailabilities() {

}
bool User::operator==(User &other) {
	return name.compare(other.getName()) == 0;
}