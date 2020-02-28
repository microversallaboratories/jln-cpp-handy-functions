//JLNMath.cpp - Implementation file

#include "JLNMath.h"

using namespace std;

/******************************************************
 * Function: 
 * Description: 
 * Input: 
 * Pre-condition: 
 * Post-condition: 
 * ****************************************************/
int fact_iter(int n){
	int ans;
	if (n==1){
		return 1;
	}
	else{
		for (int ans = n; n > 1; n ++){
			ans = ans * (n-1); 
		}
	}
	return ans;
}

/******************************************************
 * Function: 
 * Description: 
 * Input: 
 * Pre-condition: 
 * Post-condition: 
 * ****************************************************/
int fact_rec(int n){
	if (n==1){
		return 1;
	}
	return n*(factorial(n-1));
}

/******************************************************
 * Function: 
 * Description: 
 * Input: 
 * Pre-condition: 
 * Post-condition: 
 * ****************************************************/
long long fibret_rec(int n){
	if (n>1)
		return fibret_rec(n-1) + fibret_rec(n-2);
	else
		return 1;
}

/******************************************************
 * Function: 
 * Description: 
 * Input: 
 * Pre-condition: 
 * Post-condition: 
 * ****************************************************/
long long fibret_iter(int n){
	int sum = 1, tmp1 = 1, tmp2 = 1;
	for (int i = 2; i <= n ; i++){
		tmp1 = tmp2;
		tmp2 = sum;
		sum = tmp1 + tmp2;
	}
	return sum;
}

/******************************************************
 * Function: 
 * Description: 
 * Input: 
 * Pre-condition: 
 * Post-condition: 
 * ****************************************************/
long long fibret_hyb(int n, long long prev1, long long prev2){
	if (n < 2){
		return 1;
	}
	else if (n == 2){
		return prev1+prev2;
	}
	else {
		return fibret_hyb(n-1, prev1, prev2);
	}
}
//eof
