prepare:
	rm -rf build
	mkdir build
	cd build &&	cmake .. && cmake --build .
	./build/app/ATM 
    