#include <iostream>
#include "Device.cpp"
#include "RemoteControl.cpp"
#include "AdvanceRemoteControl.cpp"
using namespace std;

class Radio : Device {
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