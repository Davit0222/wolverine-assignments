#include <iostream>

int foo (char*);
int main(){
char ch [5] = "abcd";
std::cout << "strlen = " << foo(ch);

return 0;
}

int foo(char* str){
	int i = 0;
	int count = 0;
	while(str[i]!='\0'){
	++count;++i;}
	return count;

}
