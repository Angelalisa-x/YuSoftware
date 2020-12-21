#include <stdio.h>
int Pheponatch(int);
int main()
{
    printf("The 10th is %d\n",Pheponatch(10));
    return 0;
}

int Pheponatch(int N)
{
    /******************************
    //递归会产生大量重复的计算，数值较大时非常影响效率
    if(N <= 0)
        return 0;
    if(N == 1)
        return 1;
     
    return Pheponatch(N-1) + Pheponatch(N-2);

    int result[2] = {0,1};
	if(N < 2)
		return result[N];
    **********************************/
		
	long fibNMinusOne = 1;
	long fibNMinusTwo = 0;
	long fibN = 0;
	
	for(int i=2; i <= N; i++){
		fibN = fibNMinusOne + fibNMinusTwo;
		fibNMinusTwo = fibNMinusOne;
		fibNMinusOne = fibN;
	}
	
	return fibN;

}

