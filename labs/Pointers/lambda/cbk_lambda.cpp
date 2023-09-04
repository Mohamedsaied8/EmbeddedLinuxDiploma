#include<iostream>
#include<array>
#include<functional>
/*
Assignment : 

* Calculate takes  two parameters first is array/vector, second is a function which
* modifys the elements of the array:to be swapped with another array
* call std::sort for sorting array

*/
void CommStackOnEvent(std::function<void (bool&) > cbk);
void Send()
{
    auto send_data = []()->bool{ 
                    std::cout << "send data is called in commStack" << std::endl;
                    return true; };

    auto onEvent = [&send_data](bool & response){ 
        response = send_data();
        return true;};
        
   CommStackOnEvent(onEvent);
}

void Send2(std::function<bool (void)> send_data_cbk)
{
    auto onEvent = [&send_data_cbk](bool & response){ 
        response = send_data_cbk();
        return true;};

   CommStackOnEvent(onEvent);
}

void CommStackOnEvent(std::function<void (bool&) > cbk)
{
    //execution
    bool response = false;
    cbk(response);
    if(response)
    {
        std::cout << "Handling error" <<std::endl;
    }
    else
    {
         std::cout << "Handling request" <<std::endl;
    }
}

// Below Calculate functions takes a vector and 2 lambda functions in the argument list.
void Calculate (const std :: array<int,5>& arr_num, std::function<void (int)> calculateSquare,
                                                    std::function<void (int)> calculateCube)
  {   
     for (const auto& num : arr_num) {
          if (num % 2 == 0) {
              calculateSquare(num); 
          } else {
              calculateCube (num); 
          }
     }   
}

int main() {

    constexpr int array_size = 5;
    std::array<int ,array_size> nums = {1 , 2 , 3 , 4 ,5};
 
    /* []  - Capture list
       ()  - Parameter list
       -> return_type - return type
       {}  - Body of lambda function */
            
    auto lambda_square = [] (int num) -> void { 
                        std :: cout << "Number : " << num <<
                        " Square : " << num * num << std :: endl;
                        };

    auto lambda_cube   = [] (int num) -> void {
                        std :: cout << "Number : " << num <<
                        " Cube   : " << num * num * num << std :: endl; 
                        };

    Calculate (nums, lambda_square , lambda_cube);

    Send();

    auto send_data = []()->bool{ 
                    std::cout << "send data is called in commStack" << std::endl;
                    return false; };
    Send2(send_data);


   return 0;
}