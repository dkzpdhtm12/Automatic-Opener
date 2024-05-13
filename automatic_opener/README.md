# Setting
---
1. opencr setting
    - __Developed in an opencr environment__
    - See the link below for more information

        <https://emanual.robotis.com/docs/en/parts/controller/opencr10/>

## USB port setting
```bash
wget https://raw.githubusercontent.com/ROBOTIS-GIT/OpenCR/master/99-opencr-cdc.rules 
sudo cp ./99-opencr-cdc.rules /etc/udev/rules.d/
sudo udevadm control --reload-rules
sudo udevadm trigger
```
        
## Compiler Settings

```bash
sudo apt-get install libncurses5-dev:i386
```

## IDE Porting
__Preferences__
```
File ➔ Preferences ➔ URLs (Additional)
https://raw.githubusercontent.com/ROBOTIS-GIT/OpenCR/master/arduino/opencr_release/package_opencr_index.json
```
__Install the OpenCR package via Boards Manager__
```
Click Tools → Board → Boards Manager → OpenCR 1.5.2V install
```

git clone:
```
git clone https://github.com/dkzpdhtm12/Automatic-Opener.git
```