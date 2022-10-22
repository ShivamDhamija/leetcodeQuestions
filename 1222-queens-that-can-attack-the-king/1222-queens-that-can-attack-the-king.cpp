class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& arr, vector<int>& king) {
         set<pair<int,int>>st;
	 for(int i=0;i<arr.size();i++)
	 {
	 	st.insert(make_pair(arr[i][0],arr[i][1]));
	 }
	 vector<vector<int>>ans;
	 
     int row=king[0];   //row
	 int col=king[1];   //col
	 
	 //checking the first part...1
     //row will be constant
     while(col<8)
     {
     	if(st.find(make_pair(row,col))!=st.end())
     	{
     	   ans.push_back({row,col});  //we found a queen attacking the king   	
     	   break;
	    }
	    col++;
	 }
	 
	 //checking the second part...2
	 //row will be constant
	 row=king[0];   //row
	 col=king[1];   //col
	 
	 while(col>=0)
	 {
	 	if(st.find(make_pair(row,col))!=st.end())
     	{
     	   ans.push_back({row,col});  //we found a queen attacking the king   	
     	   break;
	    }
	    col--;
	 }
	 
	 //checking the third part...3
	 //col will be constant
	 row=king[0];   //row
	 col=king[1];   //col
	 
	 while(row>=0)
	 {
	 	if(st.find(make_pair(row,col))!=st.end())
     	{
     	   ans.push_back({row,col});  //we found a queen attacking the king   	
     	   break;
	    }
	    row--;
	 }
	 
	 
	 //checking the fourth part...4
	 //col will be constant
	 row=king[0];   //row
	 col=king[1];   //col
	 
	 while(row<8)
	 {
	 	if(st.find(make_pair(row,col))!=st.end())
     	{
     	   ans.push_back({row,col});  //we found a queen attacking the king   	
     	   break;
	    }
	    row++;
	 }
	 
	 //checking the fifth part...5
	 row=king[0];   //row
	 col=king[1];   //col
	 
	 while(row>=0 and col<8)
	 {
	 	if(st.find(make_pair(row,col))!=st.end())
     	{
     	   ans.push_back({row,col});  //we found a queen attacking the king   	
     	   break;
	    }
	    row--;
	    col++;
	 }
	 
	 //checking the sixth part...6
	 
	 row=king[0];   //row
	 col=king[1];   //col
	 
	 while(row<8 and col>=0)
	 {
	 	if(st.find(make_pair(row,col))!=st.end())
     	{
     	   ans.push_back({row,col});  //we found a queen attacking the king   	
     	   break;
	    }
	    row++;
	    col--;
	 }
	 
	 //checking the third part...7

	 row=king[0];   //row
	 col=king[1];   //col
	 
	 while(row>=0 and col>=0)
	 {
	 	if(st.find(make_pair(row,col))!=st.end())
     	{
     	   ans.push_back({row,col});  //we found a queen attacking the king   	
     	   break;
	    }
	    row--;
	    col--;
	 }
	 
	 //checking the third part...8
	 
	 row=king[0];   //row
	 col=king[1];   //col
	 
	 while(row<8 and col<8)
	 {
	 	if(st.find(make_pair(row,col))!=st.end())
     	{
     	   ans.push_back({row,col});  //we found a queen attacking the king   	
     	   break;
	    }
	    row++;
	    col++;
	 }
     return ans;
    }
};