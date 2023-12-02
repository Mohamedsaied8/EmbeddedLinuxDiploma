#include <iostream>
#include <vector>

using namespace std;

class PageObject {
   public:
      virtual void addItem(PageObject a) { }
      virtual void removeItem() { }
      virtual void deleteItem(PageObject a) { }
};

class Page : public PageObject {
   public:
      void addItem(PageObject a) {
      cout << "Item added into the page" << endl;
   }
   void removeItem() {
      cout << "Item Removed from page" << endl;
   }
   void deleteItem(PageObject a) {
      cout << "Item Deleted from Page" << endl;
   }
};
#include <array>
//combining inheritance and composition
class Copy : public PageObject {
   vector<PageObject> copyPages;
   public:
      void AddElement(PageObject a) {
         copyPages.push_back(a);
      }
      void addItem(PageObject a) {
         cout << "Item added to the copy" << endl;
      }
      void removeItem() {
         cout << "Item removed from the copy" << endl;
      }
      void deleteItem(PageObject a) {
         cout << "Item deleted from the copy";
      }
};

int main() {
   Page p1;
   Page p2;

   Copy myCopy;

   myCopy.AddElement(p1);
   myCopy.AddElement(p2);

   myCopy.addItem(p1);

   p1.addItem(p2);
   
   myCopy.removeItem();
   p2.removeItem();
}