#pragma once


class Task
{
    private:
        int time;
        Processor processor;
        
    public:
        void execute();
        void stop();
        Task();
};