## Dependencies
tested versions are between brackets
```
- GDAL [2.4.2]
- CGAL [4.14.1,5.0]
- GEOS [3.8.0]
- PROJ4 [6.2.1]
```

## Building:
Install dependencies, eg. on macOS:
```
brew install gdal cgal geos proj
```

and build Surfonoi:
```
cd Surfonoi/
mkdir build
cd build
cmake ..
make -j4 install
```
