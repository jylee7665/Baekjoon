#include <bits/stdc++.h>
#include <iostream>
using namespace std;

//10804
int main(void){
	int card[22] = {};
	for (int i = 1; i <= 20; i++) card[i] = i;	

	for (int i = 1; i <= 10; i++) {
		int a, b;
		cin >> a >> b;

		reverse(card+a, card+b+1);
	}

	for (int i = 1; i <= 20; i++) cout << card[i] << ' ';

}
