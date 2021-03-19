#include <iostream>
#include <HighQualityClass.hpp>
#include <HighQualityRoutines.hpp>

void sendCanMessage(char dlc, std::vector<char> values, std::vector<char> crc) 
{
    // Send the message over CAN using the provided values
};

void sendCanMessage(xq::CANMessage message)
{
    // Send the message over CAN using the provided values
}

int main()
{
    xq::useMacro();
    return 0;
}
