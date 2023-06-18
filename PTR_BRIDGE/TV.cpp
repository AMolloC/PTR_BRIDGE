#include <iostream>
#include "Device.cpp"
#include "RemoteControl.cpp"
#include "AdvanceRemoteControl.cpp"
using namespace std;

// Todos los dispositivos siguen la misma interfaz.



class TV(private val brand : String) : Device {
    private var volume : Int = 0
        private var channel : Int = 1
        private var isOn : Boolean = false

        override fun isEnabled() : Boolean{
            return isOn
    }

        override fun enable() {
        isOn = true
    }

    override fun disable() {
        isOn = false
    }

    override fun getVolume() : Int{
        return volume
    }

        override fun setVolume(percent : Int) {
        volume = percent
    }

    override fun getChannel() : Int{
        return channel
    }

        override fun setChannel(channel : Int) {
        this.channel = channel
    }
}