//codingninjas problem
#include <bits/stdc++.h> 
#include <string>
#include <vector>
void solver(string str,int index,string output,vector<string>& ans)
{
	if(index>=str.length())
	{
		if(!output.empty())
		{
		ans.push_back(output);
		}
    return;
	}

	//exclude
	solver(str,index+1,output,ans);

	//include
	char element=str[index];
	output.push_back(element);
	solver(str,index+1,output,ans);

}

vector<string> subsequences(string str){
	
	vector<string> ans;
	string output="";
	int index=0;
	solver(str,index,output,ans);
	return ans;
	
}
