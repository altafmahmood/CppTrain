/* Author		: Altaf Mahmood
 * Date			: 22 November, 2015
 * Time			: 13:24
 * Description	: A program to learn about string and to play with pointers
 */

#include <iostream>
#include <cstring>
 using namespace std;

 class StringPlay{
 	private:
 		char name[20];
 		int age;
 	public:
 		void setName(char str){
 				strcpy(str,name);
 		}
 		void setAge(int a){
 			age = a;
 		}
 		void display(){
 			cout << name << age << endl;
 		}
 };

 int main(){
 	StringPlay sp;
 	char str="Altaf";
 	sp.setName(str);
 	return 0;
 }
