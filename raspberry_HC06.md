Terminal: [sudo nano /boot/config.txt]
once inside, add "enable_uart=1" at the end of the file 
Ctrl+o (save) & Ctrl+x (exit) 
Terminal: [sudo reboot]

Terminal: [sudo systemctl stop serial-getty@ttySO.service]
Terminal: [sudo nano /boot/cmdline.txt]
Once inside, remove everything with "console"
Ctrl+o (save) & Ctrl+x (exit) 
Terminal: [sudo reboot]

Terminal: [sudo nano /boot/config.txt]
Once inside, add "dtoverlay=pi3-miniuart-bt" at the end of the file
Ctrl+o (save) & Ctrl+x (exit) 
Terminal: [sudo reboot]


![image](https://github.com/imandrec/ArduinoBluetoothApp/assets/54920275/56d9f7ff-bc0f-42ee-b6c9-d58e66413d0b)

