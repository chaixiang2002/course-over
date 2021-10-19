#include <cstdio>
#include <cstring>
#include <iostream>
#include <stdexcept>
using namespace std;
/* 
error:
if char,char!=5
    but char=='5';
if int ,int ==5;
 */
void push(char *i, char *o);
int main() {
  char pp[50], qq[50], *p, *q;
  p = pp;
  q = qq;
  printf("please intput:0011111111110011111\n");
  scanf("%s", p);
  printf("origin: %s\n", p);
  push(p, q);
  printf("added:  %s\n", q);
  return 0;
}
void push(char *in, char *on) {
  int flg = 0;
  /*  cout<<in[2]<<endl;
   in[2]='0';
   cout<<in[2]<<endl;

   cout<<in<<endl;
   cout<<"size:\t"<<strlen(in)<<endl; */
  for (int i = 0, j = 0; i < strlen(in); i++) {
    if (in[i] == '1') {
      flg++;
    } else {
      flg = 0;
    }
    on[j++] = in[i];
    /* cout<<on[j-1]; */
    if (flg == 5) {
      on[j++] = '0';
      /* cout<<on[j-1];
      cout<<"flg:"<<flg<<endl;
 */
    }
   /*  cout<<"flg:"<<flg<<endl; */
  }
}