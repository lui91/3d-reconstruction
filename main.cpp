#include <iostream>
#include <ATen/ATen.h>
#include <torch/torch.h>

using namespace std;

int main(int argc, char const *argv[])
{   
    torch::Tensor tensor = torch::eye(3);
    cout << tensor << endl;
    return 0;
}