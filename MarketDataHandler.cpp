#include <iostream>
#include <vector>

class MarketDataHandler {
public:
    void processTick(const std::string& symbol, double price) {
        std::cout << "Received tick for " << symbol << " at price " << price << std::endl;
        // Add further logic to handle tick data
    }
};

int main() {
    MarketDataHandler dataHandler;
    dataHandler.processTick("AAPL", 149.20);

    return 0;
}
