#pragma once
#include "Printer.h"
class Decimal : public Printer {
  public:
    virtual std::string GetFormatName() override;
    virtual std::string FormatNumber(int number) override;
};
