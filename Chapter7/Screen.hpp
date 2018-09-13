#include<string>
class Screen
{
  public:
    using pos=std::string::size_type;
  private:
    pos cursor=0;
    pos height=0,width=0;
    std::string contents;
  public:
    Screen()=default;
    Screen(pos ht,pos wd,char c);
    Screen(pos ht,pos wd);
    char get() const{
        return contents[cursor];
    }

    inline char get(pos r,pos c) const;

    Screen & move(pos r,pos c);

    ~Screen();
};

inline char Screen::get(pos r, pos c) const
{
    pos temp = r * width + c;
    return contents[temp];
}

inline Screen &Screen::move(pos r, pos c)
{
    cursor = r * width + c;
    return *this;
}

