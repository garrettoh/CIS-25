# Weird + build guide
Since I had my old assignment organized with header files I just did a seperate thing for this weeks assignment, because of this building it all into one executable file is off the table. 



## 📁 File Structure

Assignment11/
├── main.cpp // Main program
├── User.h / User.cpp // Base User class
├── Employee.h / Employee.cpp // Derived Employee class
├── classes.h / InventoryManager.cpp // InventoryManager class

The build for this assignment is alot because of the redundancy. that being said.. here is how you build this lol
## 🚀 Build 
```bash
cd Assignment11
g++ main.cpp User.cpp Employee.cpp Manager.cpp -o Assignment11
./Assignment11
```


