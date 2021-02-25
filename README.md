# NXP SE050 Rotate_PlatformSCPKeys

This communicates NXP SE050 secure chip from ESP32 and extract a demo written by NXP.  
This repo has used plug-and-trust library from Github.  

# Requirements

  Platformio(PIO Core:5.0.1 PLATFORM: Espressif 32 1.12.4) with VS Code environment.  
  install "Espressif 32" platform definition on Platformio  

# Environment reference
  
  Espressif ESP32-DevkitC  
  this project initialize both of I2C 0,1 port, and the device on I2C port 0 is absent.  
  pin assined as below:  


      I2C 0 SDA GPIO_NUM_18
      I2C 0 SCL GPIO_NUM_19

      I2C 1 SDA GPIO_NUM_21
      I2C 1 SCL GPIO_NUM_22
          
  NXP SE050(on I2C port 1)  

# Usage

"git clone --recursive " on your target directory.   
you need to change a serial port number which actually connected to ESP32 in platformio.ini.    
And please make sure that you have changed the following part of components/se050/ex_sss_auth.h regarding default ENC,MAC,DEK keys for which device actually you connected.     

```
/* Use the Platform SCP03 keys from required OEF
 * See https://www.nxp.com/docs/en/application-note/AN12436.pdf
 */

#   define EX_SSS_AUTH_SE05X_KEY_ENC SSS_AUTH_SE050C1_KEY_ENC
#   define EX_SSS_AUTH_SE05X_KEY_MAC SSS_AUTH_SE050C1_KEY_MAC
#   define EX_SSS_AUTH_SE05X_KEY_DEK SSS_AUTH_SE050C1_KEY_DEK
```

# Run this project

just execute "Upload" on Platformio.   

```
I (0) cpu_start: App cpu up.
I (316) heap_init: Initializing. RAM available for dynamic allocation:
I (323) heap_init: At 3FFAE6E0 len 00001920 (6 KiB): DRAM
I (329) heap_init: At 3FFB38A8 len 0002C758 (177 KiB): DRAM
I (336) heap_init: At 3FFE0440 len 00003AE0 (14 KiB): D/IRAM
I (342) heap_init: At 3FFE4350 len 0001BCB0 (111 KiB): D/IRAM
I (348) heap_init: At 4008BA30 len 000145D0 (81 KiB): IRAM
I (354) cpu_start: Pro cpu start user code
I (373) spi_flash: detected chip: generic
I (373) spi_flash: flash io: dio
I (374) cpu_start: Starting scheduler on PRO CPU.
I (0) cpu_start: Starting scheduler on APP CPU.
App   :INFO :PlugAndTrust_v02.16.01_20200818
App   :INFO :If you want to over-ride the selection, use ENV=EX_SSS_BOOT_SSS_PORT or pass in command line arguments.
sss   :INFO :atr (Len=35)
      00 A0 00 00    03 96 04 03    E8 00 FE 02    0B 03 E8 08
      01 00 00 00    00 64 00 00    0A 4A 43 4F    50 34 20 41
      54 50 4F
App   :INFO :Congratulations !!! Key Rotation Successful!!!!
App   :INFO :Congratulations !!! Key Rotation Successful!!!!
App   :INFO :se05x_TP_PlatformSCP03keys Example Success !!!...
App   :INFO :ex_sss Finished
```

# License

This software is released under the MIT license unless otherwise specified in the included source code. See License. 
