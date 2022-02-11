#pragma once
#include "DataSourceInterface.h"
#include "FilesHelper.h"

class FileManager : public DataSourceInterface{
private:
//	static void addClient(Client client) {
//		FilesHelper::saveClient(client);
//	}
//	static void addEmployee(Employee employee) {
//		FilesHelper::saveEmployee("Employees.txt", "EmployeeLastId.txt", employee);
//	}
//	static void addAdmin(Admin admin) {
//		FilesHelper::saveEmployee("Admins.txt", "AdminLastId.txt", admin);
//	}
//	static void getAllClients() {
//		FilesHelper::getClients();
//	}
//	static void getAllEmployees() {
//		FilesHelper::getEmployees();
//	}
//	static void getAllAdmins() {
//		FilesHelper::getAdmins();
//	}
//	static void removeAllClients() {
//		FilesHelper::clearFile("Clients.txt", "ClientLastId.txt");
//	}
//	static void removeAllEmployees() {
//		FilesHelper::clearFile("Employees.txt", "EmployeeLastId.txt");
//	}
//	static void removeAllAdmins() {
//		FilesHelper::clearFile("Admins.txt", "AdminLastId.txt");
//	}
	static void addClient1(Client client) {
		FilesHelper::saveClient(client);
	}
	static void addEmployee1(Employee employee) {
		FilesHelper::saveEmployee("Employees.txt", "EmployeeLastId.txt", employee);
	}
	static void addAdmin1(Admin admin) {
		FilesHelper::saveEmployee("Admins.txt", "AdminLastId.txt", admin);
	}
	static void getAllClients1() {
		FilesHelper::getClients();
	}
	static void getAllEmployees1() {
		FilesHelper::getEmployees();
	}
	static void getAllAdmins1() {
		FilesHelper::getAdmins();
	}
	static void removeAllClients1() {
		FilesHelper::clearFile("Clients.txt", "ClientLastId.txt");
	}
	static void removeAllEmployees1() {
		FilesHelper::clearFile("Employees.txt", "EmployeeLastId.txt");
	}
	static void removeAllAdmins1() {
		FilesHelper::clearFile("Admins.txt", "AdminLastId.txt");
	}
public:
	static void getAllData() {
		getAllClients1();
		getAllEmployees1();
		getAllAdmins1();
	}
	static void updateClients() {
		removeAllClients1();
		for (clIt = allClients.begin(); clIt != allClients.end(); clIt++) addClient1(*clIt);
	}
	static void updateEmployees() {
		removeAllEmployees1();
		for (eIt = allEmployees.begin(); eIt != allEmployees.end(); eIt++) addEmployee1(*eIt);
	}
	static void updateAdmins() {
		removeAllAdmins1();
		for (aIt = allAdmins.begin(); aIt != allAdmins.end(); aIt++) addAdmin1(*aIt);
	}
};
