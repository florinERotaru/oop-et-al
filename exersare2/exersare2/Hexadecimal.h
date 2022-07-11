#pragma once
#include "Printer.h"
class Hexadecimal : public Printer{
  public:
    virtual std::string GetFormatName() override;
    virtual std::string FormatNumber(int number) override;
};
