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


