#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

class A
{
 public:
 int x;
 A(int a)
// parameterized

 {
 x=a;
 }
 A(A &i)
// copy constructor
 {
 x = i.x;
 }
};
int main()
{
 A a1(20);
// Calling the

A a2(a1);
// Calling the copy

cout<<a2.x;
 return 0;
}
