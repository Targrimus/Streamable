#ifndef CLASSES_H
#define CLASSES_H

/*
*   INTERFACE
*/
class Streamable {
    friend std::ostream& operator<<(std::ostream& out, const Streamable& operand){
        operand.stream_insert(out);
        return out;
    }

public:
    virtual void stream_insert(std::ostream& out) const = 0;
};


/*
*   ANIMAL CLASS
*/

class Animal : public Streamable {
    const char * m_description = "Animal";

public:
    virtual void stream_insert(std::ostream& out) const override{
        out << this->m_description;
    }
};


/*
*   BIRD CLASS
*/
class Bird : public Animal{
    const char * m_description = "Bird";

public:
    virtual void stream_insert(std::ostream& out) const override{
        out << this->m_description;
    }
};


/*
*   CORW CLASS
*/
class Crow : public Bird{
    const char * m_description = "Crow";

public:
    virtual void stream_insert(std::ostream& out) const override{
        out << this->m_description;
    }
};





#endif
