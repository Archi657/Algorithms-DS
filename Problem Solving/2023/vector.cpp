class Vector {
private:
	int *arr = nullptr;
	int size = 0;
public:
	Vector(int size) :
		size(size){
			if(size<0)
				size = 1;
			arr = new int[size]{};
		}
	~Vector(){
		delete[] arr;
		arr = nullptr;
	}
}
