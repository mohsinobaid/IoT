# IoT
IoT
A Framework for IoT

<img src="IoT2.png"/>

Internet of Things (IoT) is the interconnection and communication between computers within a specific network. The primary goal of this project is to develop a framework that can accommodate an array of devices and functions to ease the task of building an IoT network.  The framework is required to be both reusable and expandable to be efficient in the growing IoT field. The built framework currently supports the usage of Arduino, Raspberry Pi, and the Spark Core. Within each of these controllers, there are different communication methods such as Bluetooth, Wi-Fi, and serial available. Combining the controller layer and a communication method opens up a plethora of available device functionalities.  As there are quite a few similarities between these controllers, the project adapted software product line engineering (SPLE) methodologies were adapted. Looking at the project from an SPLE standpoint, it was quite easy to expand the framework to support more communication methods and functions. As the framework is built, we developed an interface to properly display the various functionalities and ultimately simulated a smart home system. The “smart home” system works entirely using the built framework over various microcontrollers using various communication methods. Existing functions such as a proximity sensor or automated temperature alerts can be mimicked with the built smart home system. With the framework built and smart home system to demonstrate its strength, the project successfully accomplished its primary goal. Using SPLE, the project was also able to accomplish its secondary goal which was to be reusable and expandable in every aspect.

<img src="IoT.png"/>
