// NFC.hpp
#ifndef NFC_HPP_
# define NFC_HPP_
# include <Arduino.h>
# include <String.h>

# include <Wire.h>
# include <PN532_I2C.h>
# include <PN532.h>

class NFC
{
  public:
    NFC();
    ~NFC();
    bool CheckNFC();
  private:
    //PN532_I2C pn532_i2c(Wire);
    //PN532 _nfc = nfc(pn532_i2c);
};

#endif /* NFC_HPP_ */
