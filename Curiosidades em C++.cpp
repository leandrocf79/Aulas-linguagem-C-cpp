
//ignorar números em ARRAY

#include <stdio.h>
int fun(int *t) 
{ 
return *(t + 5);
} 

int main(void) 
   
{ int arr[] = { 6, 5, 4, 3, 2, 1, 0 };
printf("%d\n", fun(arr - 2)); 
	
return 0; }
// 3
//***********

#include <stdio.h> 
float f(float v) 
{ 
v = v / 2.0; 
return v + v; 
}

int main(void) { 

float x = 7; 
f(x);
printf("%f",x); 

return 0; }
//7.0000000
//***********

#include <stdio.h> 
char *f(char *p) 
{ 
return p += 2; 
} 

char *g(char *p) 
{ 
return --p; 
} 

int main(void) { 
char *s = "ABCDEFGHIJ"; 
char p = *f(g(f(s + 1))); 
printf("%d",p - 'A'); 
return 0; }
//4
//***********

#include <stdio.h> 
struct S 
{ int S[3]; 
}; 

void f(struct S S) { 
S.S[0] = S.S[1] + S.S[2] - 4; 
} 

int main(void) { 
struct S S = { { 1, 4, 2 } }; f(S); 
printf("%d",S.S[1] * S.S[0]); 
return 0; }
//4
//***********

#include <stdio.h> 
struct S 
{ 
int S[3]; 
}; 

void f(struct S *S) 
{ 
S->S[2] = 6 * S->S[0] + S -> S[1]; 
} 

int main(void) 
{ 
struct S S = { { 1, 2 } }, *P = &S; 
f(P); 
printf("%d",S.S[2] / S.S[0]); 
return 0; 
}
//8
//***********

#include <stdio.h> 
#include <string.h> 

char *f(int p, char *s) 
{ 
s[p + 2] = '\0'; 
return s - 1; 
} 

int main(void) { 
char s[] = "ABCDEF"; 
int i = strlen(f(1,s + 2)); 
printf("%d\n",i); 
return 0; 
}
//4
//***********
#include <stdio.h> 
int main(void) 
{ 
char s[20] = "?"; 
FILE *f = fopen("fopen","w"); 
int i = fputs("789",f); 
fclose(f); 
f = fopen("fopen","r"); 
fgets(s + 1,3,f); 
printf("%c\n", s[2] - s[3]); 
fclose(f); 
return 0; 
}
//8
//***********

#include <stdio.h> 
#define ONE 1 
#define TWO ONE + ONE 
int main(void) { 
int i = 2; 
i = i - 2 * TWO; 
printf("%d\n", i); 
return 0; }
//1
//***********

Qual o último valor das variáveis nas sequências? 
#include <iostream>
#include <stdio.h> 

int main() {

int X = 1; 
X = X + 2 * X; 
X = X / 2 * X; 
X = X + 2 + X;
std::cout<<X; 
return 0; 
}
//x=8
//*****

#include <iostream>
#include <stdio.h> 

int main() {

int X = 1; 
X = X * X + 2; 
X = X / X * 2; 
X = X + 2 + X;
std::cout<<X; 
return 0; 
}
//x=6
//*****
#include <iostream>
#include <stdio.h> 

int main() {

 int X = 3, Y = 2, Z; 
 Z = X / Y * --X * Y++;
std::cout<<Z; 
return 0; 
}
//Z=4
//***********

#include <stdio.h> 
int main() 
{ 
int X = 8; 
X = X - X / 2; 
X = X * X / 4; 
X = X + 2 * X; 
return 0; 
}
//12
//*****

#include <stdio.h> 
struct Q 
{ 
int a,b,c; 
}; 
struct S 
{ 
int a,b,c; 
struct Q Q; 
}; 

int main(void) { 
struct Q Q = { 3,2,1 }; 
struct S S = { 4,5,6 }; 
S.Q = Q; 
printf("%d",S.b - S.Q.b); 
return 0; 
}
//3
//***********

#include <stdio.h> 
int main(void) { 
int a = -1, b = 1; 
float i = 2.0, j = -2.0; 
printf("%d\n", (a > b) + (b > a) + (i > j) + (j > i) + ('z' > 'a')); 
return 0; 
}
//3
//***********

#include <stdio.h> 
int main(void) { 
int i = 0; 
if(i = 1) 
i = 2; 
else i = 3; 
printf("%d\n",i); 
return 0; 
}
//2
//***********

#include <stdio.h> 
int main(void) 
{ 
float x = 3.0, y = 2.0; 
int i = 1, j = 2; 
x = (int)x / y + (float)i / j; 
printf("%f",x); 
return 0; 
}
//2.00000000
//***********

#include <stdio.h> 
int main() 
{ 
float X = 2.0; 
X = X + X * 4; 
X = X / X * X; 
X = X / X + X;
std::cout<<X;
}
//11
//***********

#include <stdio.h> 
#include <string.h> 
struct Q 
{ 
char S[3]; 
}; 
struct S 
{ 
struct Q Q; 
}; 
int main(void) 
{ 
struct S S = { '\0', '\0','\0' }; 
S.Q.S[0] = 'A'; 
S.Q.S[2] = 'B'; 
printf("%d",strlen(S.Q.S)); 
return 0; 
}
//1
//***********

#include <stdio.h> 
int main() 
{ 
int X = 1, Y = X + 2, Z = Y++; 
Z = X / Y * --X * Y--;
 
std::cout<<"X = "<<X;
std::cout<<"\nY = "<<Y;
std::cout<<"\nZ = "<<Z;
return 0; 
}
//Y=3
//***********

#include <stdio.h> 
int main() 
{ 
 int X; 
 X = ('r' - 's') * ('A' / 'Z');
 std::cout<<X;
return 0; 
}
//0
//***********

 #include <stdio.h> 
 int main(void) { 
 int x = 1, y = 1; 
 float k = -1e0, m = 2e1; 
 printf("%d\n", (x >= y) + (x >= y) + (k >= y) + (m >= k) + ('q' <= 'z')); 
 return 0; 
 }
 //0
//***********

#include <stdio.h> 
int main(void) { 
int i = 1; 
if(i = 0) i = 2; 
else i = 3; 
printf("%d\n",i); 
return 0; }
//3
//***********

#include <stdio.h> 
int main(void) { 
int i = 1, j = 0; 

do { 
i *= 2; 
j += i / 2; 
} 
while(j < 1); 
printf("%d",i + j); 
return 0; }
//3
//***********

#include <stdio.h> 
int main(void) { 
int i = 1, j; 

for(j = 0; j ; j--) 
i *= 2; 
printf("%d",i + j); 
return 0; }
//1
//***********

 #include <stdio.h> 
 int main(void) { 
 int i = -1, j = 1; 
 for(i++; i++; i++) 
 j++; 
 printf("%d",i + j); 
 return 0; }
 //2
//***********

#include <stdio.h> 
int main(void) { 
int i = 1, j = 0, k; 
k = (i >> j) + (j >> i) + (i >> i) + (j >> j); 
k <<= i; 
printf("%d", k); 
return 0; }
//2
//***********

#include <stdio.h> 
int main(void) { 
int i = 3, j = i - 2 * i; 
switch(i - j) { 
case 1: j++; 
case 2: j--; 
case 0: j++; 
break; 
default: j = 0; 
} 
printf("%d", ++j); 
return 0; }
//1
//***********

#include <stdio.h> 
int main(void) { 
int i = 5, j = i - 4 * i; 
switch(j) { 
default: j = 2; 
case 1: j--; 
break; 
case 2: j++; 
case 0: j--; 
break; } 
printf("%d", j++); 
return 0; }
//1
//***********

// tente executar tudo na mesma linha, não dará erro algum
#include <stdio.h> 
int main(void) { int i, t[4]; for(i = 0; i < 3; i++) { t[i] = 4 - i; t[i + 1] = 2 * t[i]; } printf("%d\n", t[2]); return 0; }
//2
//***********

#include <stdio.h>
int main(void) { int i, s = 0, t[] = {16, 8, 4, 2, 1, 0}; for(i = 5; t[i] > 2; i /= 2) s += t[i]; printf("%d\n", s); return 0; }
//0
//***********

#include <stdio.h> 
int main(void) { 
char t[] = { 'x', 'z', 'Y', 'Z', '2' , '0'}; 
printf("%d\n", t[t[1] - t[0] - t[3] + t[2] + 3] - t[5]); 
return 0; }
//2
//***********

#include <stdio.h> 
int main(void) { 
float a = 3.14E0, *b = &a, **c = &b; 
**c = a + (a == *b); 
printf("%f", a); 
return 0; }
//4.140000
//***********

#include <stdio.h> 
int main(void) { 
char t[4][4]; 
printf("%d\n",sizeof(t) / sizeof(t[0]) / sizeof(t[0][0])); 
return 0; }
//4
//***********

#include <stdio.h> 
int main(void) { 
char *p = "\0\2\1\3\4"; 
printf("%d\n", p[p[2]] + *(p + 1) + p[0]); 
return 0; }
//4
//***********

#include <stdio.h> 
#include <string.h> 
int main(void) { 
char tt[20] = "9081726354"; 
strcpy(tt, tt + 3); 
printf("%d\n", strlen(tt) - tt[9] + '5'); 
return 0; }
//8
//***********

#include <stdio.h> 
#include <string.h> 
int main(void) { 
char tt[20] = "0123456789"; 
strcat(tt + 11, "123"); 
printf("%d\n", strlen(tt) - tt[8] + '0'); 
return 0; }
//2
//***********

 #include <stdio.h> 
 #include <stdlib.h> 
 int main(void) { 
 float *t = 1 + (float *) malloc(sizeof(float) * sizeof(float)); 
 t--; 
 *t = 8.0; 
 t[1] = *t / 4.0; 
 t++; 
 t[-1] = *t / 2.0; 
 printf("%f\n",*t); 
 free(--t); 
 return 0; }
 //2.000000
//***********

#include <stdio.h> 
#include <string.h> 
struct S 
{ 
char S[8]; 
}; 
int main(void) { struct S S = { 'a', 'b', 'c', 'd' }; 
printf("%d", sizeof(S.S) - strlen(S.S) + S.S[4]); 
return 0; }
//4  
//***********

#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
struct S { char *S; }; 
int main(void) { struct S *S = (struct S *) malloc(sizeof(struct S)); 
S -> S = "123\0""45678"; 
printf("%d", strlen(S -> S + 5) + S -> S[3]); 
free(S); 
return 0; }
//4
//***********

#include <stdio.h> 
struct S { int Var; struct S *Str; }; 
int main(void) { struct S S[] = { { 8, NULL }, { 4, &S[0] }, { 2, &S[1] } }; 
printf("%d", S[2].Str->Str->Var); 
return 0; }
//8
//***********

#include <stdio.h> 
int main(void) { 
int i = 2, j; 
for(j = 0; j < 0; j -= i) i /= 2; 
printf("%d",i + j); 
return 0; }
//2
//***********
#include <stdio.h> 
int main(void) { 
int i = 5, j = 4; 
for(i--; i--; i--) j--; 
printf("%d",i + j); 
return 0; }
//1
//***********

#include <stdio.h> 
int main(void) { 
int i = 1, j = 0, k; 
k = (i & j) + (i | j) + (i ^ j) + !i + j; 
printf("%d", k); 
return 0; }
//2
//***********

#include <stdio.h> 
int main(void) { 
int i = 1, j = 0, k; 
k = (i << j) + (j << i) + (i << i) + (j << j); 
k >>= i; 
printf("%d", k); 
return 0; }
//1
//***********

#include <stdio.h> 
int main(void) { 
int i = 1, j = i + 2 * i; 
switch(j - i) { 
case 1: j++; 
case 2: j--; 
case 0: j++; 
break; 
default: j = 0; 
} 
printf("%d", ++j); 
return 0; }
//4
//***********

#include <stdio.h> 
int main(void) { 
int i = 1, j = i + 2 * i; 
switch(j) { 
default: j = 0; 
case 1: j++; 
break; 
case 2: j--; 
case 0: j++; 
break; } 
printf("%d", ++j); 
return 0; }
//2
//***********

#include <stdio.h> 
int main(void) { 
int i, t[4]; 
for(i = 0; i < 3; i++) 
{ 
t[i] = i; t[i + 1] = 2 * t[i]; 
} 
printf("%d\n", t[3]); 
return 0; }
//4
//***********

#include <stdio.h> 
int main(void) { 
int i, t[4]; 
for(i = 3; i; i--) 
{ 
t[i] = i - 1; t[t[i]] = t[i]; 
} 
printf("%d\n", t[0]); 
return 0; }
//0
//***********

#include <stdio.h> 
int main(void) { 
int i, s = 0, t[] = {0, 1, 2, 4, 8, 16}; 
for(i = 2; t[i] < 8; i *= 2) 
s += t[i]; 
printf("%d\n", s); 
return 0; }
//2
//***********

#include <stdio.h> 
int main(void) { 
char t[] = { 'a', 'z', 'B', 'Z', '0' }; 
printf("%d\n", t[t[1] - t[0] - t[3] + t[2] + 3] - t[4]); 
return 0; }
//0
//***********

#include <stdio.h> 
int main(void) { 
char a = 'A', *b = &a, **c = &b; 
**c = a + (a == *b); 
printf("%c", a); 
return 0; }
//B
//***********

#include <stdio.h> 
int main(void) { 
int t[4][4]; 
printf("%d\n",sizeof(t) / sizeof(t[0]) / sizeof(t[0][0])); 
return 0; }
//1
//***********

#include <stdio.h> 
int main(void) { 
int t[4] = { 0, -1, -2, -3 }, *p = t + 3; 
printf("%d\n", p[*p] - t[2]); 
return 0; }
//2
//***********

#include <stdio.h> 
int main(void) { 
char *p = "\0\4\1\3\2"; 
printf("%d\n", p[p[1]] + *(p + 1) + p[4]);
return 0; }
//8
//***********

 #include <stdio.h> 
 #include <string.h> 
 int main(void) { 
 char tt[20] = "0123456789"; 
 strcpy(tt, tt + 2); 
 printf("%d\n", strlen(tt) - tt[9] + '5'); 
 return 0; }
 //4
//***********

#include <stdio.h> 
#include <string.h> 
int main(void) { 
char tt[20] = "0123456789"; 
strcat(tt + 2, "987"); 
printf("%d\n", strlen(tt) - tt[5] + '0'); 
return 0; }
//8
//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********


//***********



