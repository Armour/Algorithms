// Constructor
bitset<16> bs(100);
bitset<16> bs(std::string("0101111001"));

// Bit access
bs[i];
bs.size();
bs.count();                 // The number of 1
bs.test(i);
bs.any();
bs.all();
bs.none();

// Bit operations
bs.set();                   // 1111
bs.set(2, 0);               // 1011
bs.set(2);                  // 1111
bs.reset(1);                // 1101
bs.reset();                 // 0000
bs.flip(2);                 // 0100
bs.flip();                  // 1011

// Convert
bs.to_string();
bs.to_ulong();
bs.to_ullong();
