#ifndef HIGH_QUALITY_CLASS
#define HIGH_QUALITY_CLASS

#include <vector>
#include <string>

namespace xq
{
    class CANMessage
    {
    public:
        void addValue(char index, char value)
        {
            m_values.at(index) = value;
        }

        void calculateCRC()
        {
            int crcValue = 0;
            for (int i = 0; i < m_values.size(); ++i)
            {
                crcValue += m_values.at(i);
                // Logic to turn the crcValue into a vector of hexadecimal numbers
            }
        }

        std::vector<char> getMessage()
        {
            // Logic to add the m_values and the m_crc to m_message
            return m_message;

        }

    private:
        std::vector<char> m_message;
        std::vector<char> m_values;
        std::vector<char> m_crc;
        char dlc;
    };

    class CANMessageTransceiver
    {
    public:
        bool sendCanMessage(const CANMessage& message)
        {
            // Send the message over CAN
        }

        CANMessage receiveCanMessage()
        {
            // Receive a CAN message
            return CANMessage{};
        }

    private:
        // Data and helper functions, not visible to the user
    };

    class CANMessageTranscieverBad
    {
    public:
        void openCommunicationChannel(int channelId)
        {
            // Set the channel for communication
        }

        void setCommunicationChannelBaudRate(int baudRate)
        {
            // Set the baud rate of the channel
        }

        bool isCRCValid(const CANMessage& message)
        {
            // Check if CRC of the message is valid 
        }

        bool sendCanMessage(const CANMessage& message)
        {
            // Send the message over CAN
        }

        CANMessage receiveCanMessage()
        {
            // Receive a CAN message
            return CANMessage{};
        }
    };

    class CANMessageTransceiverEroded
    {
    public:
        bool sendCanMessage(const CANMessage& message)
        {
            // Send the message over CAN
        }

        CANMessage receiveCanMessage()
        {
            // Receive a CAN message
            return CANMessage{};
        }

        void storeReceivedMessagesInDb()
        {
            // Store the received messages in database
        }

        void openDbConnection()
        {
            // Open connection to database
        }

        void closeDbConnection()
        {
            // Close connection to database
        }

    private:
        // Data and helper functions, not visible to the user
    };

    class ClusterECUBad : public CANMessageTransceiver
    {
    public:
        void setAnalogSpeed(int value)
        {
            // Set the value of the analog speedometer
        }

        void setDigitalSpeed(int value)
        {
            // Set the value of the digital speedometer
        }

        bool sendCanMessage(const CANMessage& message)
        {
            // Send the message over CAN
        }

        CANMessage receiveCanMessage()
        {
            // Receive a CAN message
            return CANMessage{};
        }

    private:
        // Some private data
    };

    class ClusterECU
    {
    public:
        void setAnalogSpeed(int value)
        {
            // Set the value of the analog speedometer
        }

        void setDigitalSpeed(int value)
        {
            // Set the value of the digital speedometer
        }

    private:
        CANMessageTransceiver m_messageTransceiver;
    };

    class FileInterpreter
    {
    public:
        FileInterpreter(std::string filePath)
            : m_filePath{filePath}
        {
        }

        void processData()
        {
            // Open the file using m_filePath
            // Process the data
        }
    private:
        std::string m_filePath;
    };

    class FileInterpreterBad
    {
    public:
        FileInterpreterBad()
        {
        }

        void setFilePath(std::string filePath)
        {
            m_filePath = filePath;
        }

        void processData()
        {
            // Open the file using m_filePath
            // Process the data
        }
    private:
        std::string m_filePath;
    };
}
#endif // !HIGH_QUALITY_CLASS