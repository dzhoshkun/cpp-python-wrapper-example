#pragma once


#include <string>


class Bitmap
{
    protected:
        std::string _filepath;
        size_t _ctr;
        uint8_t * _data;
        size_t _width;
        size_t _height;

    public:
        Bitmap(std::string filepath);
        virtual ~Bitmap();

    public:
        uint8_t * const get_data() const;
        size_t get_width() const;
        size_t get_height() const;
        std::string save();
        virtual std::string info() const;

    protected:
        std::string timestamp(std::string filepath);
};
