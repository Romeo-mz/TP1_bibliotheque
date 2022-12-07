#pragma once
#include <string>
#include "date.h"


class Author {
    public: 
        Author(int id = 0, std::string name = "Name", std::string surname = "Surname", Date d = Date());
        int getID() const;
        std::string getName() const;
        std::string getSurname() const;
        std::string getDate() const;
        void updateName(std::string name);
        void updateSurname(std::string surname);

    private:
        int _id;
        std::string _name;
        std::string _surname;
        Date _d;

};

std::string authorInfo(Author a);