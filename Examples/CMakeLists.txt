cmake_minimum_required(VERSION 3.0.0)

set(CMAKE_TOOLCHAIN_FILE "${CMAKE_CURRENT_SOURCE_DIR}/../Arduino-toolchain.cmake")

set(ARDUINO_BOARD "Arduino Uno [avr.uno]") # Arduino Uno
#set(ARDUINO_BOARD "Arduino Mega or Mega 2560 [avr.mega]") # Arduino Mega or Mega 2560

set(SERIAL_PORT "/dev/ttyACM0")

project(Examples C CXX)

add_subdirectory(01_hello_world)
add_subdirectory(02_arduino_lib)
add_subdirectory(03_portable_app)
add_subdirectory(04_multi_app)
add_subdirectory(05_auto_link)
