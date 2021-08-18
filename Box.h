class Box {
    private:
       int length;
       int width;
       int height;
    public:
       // write prototypes of setters for length, width and height
       // write prototypes of getters for length, width and height
        void setLength(int L);
        int getLength();
        void setWidth(int W);
        int getWidth();
        void setHeight(int H);
        int getHeight();
       int calcVolume();
};
