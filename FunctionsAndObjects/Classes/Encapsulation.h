#ifndef DEV210X_ENCAPSULATION_H
#define DEV210X_ENCAPSULATION_H

class Encapsulation {

public:
  Encapsulation() : m_width{1}, m_height{1} {}

  Encapsulation(int initial_width, int initial_height)
      : m_width{initial_width}, m_height{initial_height} {}

public:
  int get_area() { return this->m_width * this->m_height; }

  void resize(int new_width, int new_height) {
    m_width = new_width;
    m_height = new_height;
  }

  int get_width() { return m_width; }
  int get_height() { return m_height; }

private:
  int m_width;
  int m_height;
};

#endif