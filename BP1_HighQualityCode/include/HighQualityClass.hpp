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

    class CANMessageImpl
    {
    public:
        std::vector<char> getMessage() { return m_message; }
        void setMessage(std::vector<char> value) { m_message = value; }
        std::vector<char> getValues() { return m_values; }
        void setValues(std::vector<char> value) { m_values = value; }
        std::vector<char> getCrc() { return m_crc; }
        void setCrc(std::vector<char> value) { m_crc = value; }
        char getDlc() { return m_dlc; }
        void setCrc(char value) { m_dlc = value; }

    private:
        std::vector<char> m_message;
        std::vector<char> m_values;
        std::vector<char> m_crc;
        char m_dlc;
    };

    class CANMessageEncapsulated
    {
    public:
        void addValue(char index, char value)
        {
            m_canMessageImpl->getValues().at(index) = value;
        }

        void calculateCRC()
        {
            int crcValue = 0;
            for (int i = 0; i < m_canMessageImpl->getValues().size(); ++i)
            {
                crcValue += m_canMessageImpl->getValues().at(i);
                // Logic to turn the crcValue into a vector of hexadecimal numbers
            }
        }

        std::vector<char> getMessage()
        {
            // Logic to add the m_values and the m_crc to m_message
            return m_canMessageImpl->getMessage();

        }

    private:
        CANMessageImpl* m_canMessageImpl;
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

        void openDbConnection(const std::string& connectionString )
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

    class CANMessageTransceiverNonEncapsulated
    {
    public:
        bool sendCanMessage(const CANMessage& message)
        {
            // Send the message over CAN
        }

        CANMessage receiveCanMessage()
        {
            // Receive a CAN message
            storeCanMessage();
            return CANMessage{};
        }

        void storeCanMessage()
        {
            // Store the message in some medium
        }

    private:
        // Data and helper functions, not visible to the user
    };

    class ClusterECUBad
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

        bool sendCanMessage()
        {
            // Send the message over CAN
        }

        bool receiveCanMessage()
        {
            // Receive a CAN message
        }

    private:
        int m_speedValue;
        CANMessage m_message;
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

    class DatabaseManager
    {
    public:

        void connectToDb()
        {
            // If not connected already to db, connect.
        }

        void getAllRecordsFromDb()
        {
            // If not connected to db
            connectToDb();

            // ....
            // Get all records
        }
    };

    class WidgetTyped
    {
    public:
        void drawLabel()
        {
            // Draw a label
        }

        void drawImage()
        {
            // Draw an image
        }

        int getWidgetType()
        {
            return m_widgetType;
        }

    private:
        int m_widgetType;
    };

    class IWidget
    {
        virtual void draw() = 0;
    };

    class ImageWidget : public IWidget
    {
        void draw() override
        {
            // Draw an image
        }
    };

    class LabelWidget : public IWidget
    {
        void draw() override
        {
            // Draw a label
        }
    };
}
#endif // !HIGH_QUALITY_CLASS