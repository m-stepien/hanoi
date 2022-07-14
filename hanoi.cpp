#include <iostream>
using namespace std;
void hanoi(int n, char pierwsza, char druga, char trzecia);
int main(void){
hanoi(4, '1','2','3');
return 0;
}
void hanoi(int n, char pierwsza, char druga, char trzecia){
n--;
if(n>0)hanoi(n,pierwsza, trzecia, druga);
cout<<"Z "<<pierwsza<<" na "<<trzecia<<endl;
if(n>0)hanoi(n, druga, pierwsza, trzecia);
}
