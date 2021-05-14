#include <iostream>
using namespace std;
//*******************Arrays in classes*****************************//
class shop
{
  int itemId[100];
  int itemPrice[100];
  int counter;
  public:
    void initcounter(void)
    {
      counter=0;
    }
    void setPrice(void);
    void displayPrice(void);
};
void shop::setPrice(void)
{
  cout<<"Enter ID of your item no "<<counter+1<<endl;
  cin>>itemId[counter];
  cout<<"Enter price of the item "<<endl;
  cin>>itemPrice[counter];
  counter++;
}
void shop::displayPrice(void)
{
  for(int i=0; i<counter;i++)
  {
    cout<<"The price of the item with id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
  }
}
int main()
{
  shop mart;
  mart.initcounter();
  mart.setPrice();
  mart.setPrice();
  mart.setPrice();
  mart.displayPrice();
  return 0;
}
