#include<stdio.h>
#include<stdbool.h>


bool Palindrome(int iValue)
{
	int num = iValue;
	int rev = 0;
	int iDigit = 0;
	while(iValue != 0)
	{
		iDigit = iValue % 10;
		rev = rev * 10 + iDigit;
		iValue = iValue/10;

	}

	if(num == rev)
	{
		return true;
		
	}
	else
	{
		return false;
	}
}

int main()
{
	int iNo = 0;
	bool bRet = false;

	printf("Enter a number:\n");
	scanf("%d", &iNo);
		
	 bRet = Palindrome(iNo);

	if(bRet == true)
	{
		printf("Number is palindrome\n");
	}
	else
	{
		printf("Number is not palindrome\n");
	}



	return 0;
}