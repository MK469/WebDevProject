
#include<bits/stdc++.h>
using namespace std;

	void deleteMid_util(stack<char>&s, int sizeOfStack, int current)
	{

		if(current==sizeOfStack/2)
		{
			s.pop();
			return;
		}
		
	
		int x = s.top();
		s.pop();
		current+=1;

		deleteMid_util(s,sizeOfStack,current);
		

		s.push(x);
	}
	void deleteMid(stack<char>&s, int sizeOfStack)
	{
		deleteMid_util(s,sizeOfStack,0);
	}

int main()
{
	stack<char> st;

	st.push('6');
	st.push('7');

	deleteMid(st, st.size());


	while (!st.empty())
	{
		char p=st.top();
		st.pop();
		cout << p << " ";
	}
	return 0;
}
