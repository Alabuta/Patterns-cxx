#pragma once
#include "ICommand.h"

class Receiver;

class Add final : public ICommand {
public:

    Add() = delete;
    Add(Receiver *receiver, float operand);

    void Execute();
    void Unexecute();

private:
    float operand_;
};