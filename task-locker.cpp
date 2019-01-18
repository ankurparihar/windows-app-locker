#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

using namespace std;

int main(int argc, char* argv[]){
	char password[] = "mychromepass";
	cout << "Enter password to unlock the app: ";
	char app[] = "C:\\Program Files (x86)\\Google\\Chrome\\Application\\chrome-lock.exe";
	char user_pas[32];
	cin >> user_pas;
	while(strcmp(password, user_pas)!=0){
		cout << "Wrong password!" << endl << "Enter password to unlock the app: ";
		cin >> user_pas;
	}
	ShellExecute(NULL, "open", app, argv[1], NULL, SW_SHOWDEFAULT);
	return 0;
}