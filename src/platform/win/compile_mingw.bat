g++ -std=c++11 -O3 -s -fno-exceptions -fno-rtti -ffunction-sections -fdata-sections -Wl,--gc-sections -DWIN32 -DNDEBUG -DNO_TOUCH_SUPPORT -DGEOMETRY_EXPORT -I../../libs/ main.cpp ../../libs/stb_vorbis/stb_vorbis.c ../../libs/minimp3/minimp3.cpp ../../libs/tinf/tinflate.c -I../../ -o../../../bin/OpenLara_mingw.exe -L../../libs/libsm64/dist -lsm64 -lopengl32 -lwinmm -lwsock32 -lgdi32 -lm