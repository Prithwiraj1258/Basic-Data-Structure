#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
  vector<int> v; // একটা vector v নেয়া হচ্ছে।
  void push(int val) // একটা push function নেয়া হচ্ছে যেখানে vector এর push_back method use করা হচ্ছে।
  {
    v.push_back(val); 
  }
  //একইভাবে pop funtion বানানো হচ্ছে।
  void pop()
  {
    v.pop_back();
  }
  //top function এ vector এর back method use করা হচ্ছে যা আমাদের vector এর last value টা দিবে।
  int top() 
  {
    return v.back();
  }
  //vector এর size method দিয়ে stack এ size function বানানো হচ্ছে।
  int size()
  {
    return v.size();
  }
  //empty check করার operation এ ও size method এ সাহায্যে
  bool empty()
  {
    if (v.size() == 0)
      return true;
    else
      return false;
  }
};
int main()
{
  myStack st; //এখানে এভাবে করে আমরা একটা stack object নিচ্ছি।
  int n;
  cin >> n; // এখানে stack এ size নিচ্ছি।
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    st.push(x); //এই method এর মাধ্যমে stack এ value রাখা হচ্ছে
  }
  while (st.empty() == false) //এখানে stack এ value আছে কিনা check করা হচ্ছে।
  {
    cout << st.top() << endl; // এখানে top value টা check করে print করা হচ্ছে।
    st.pop(); //top value টা delete বা pop করা হচ্ছে।
  }

  return 0;
}
