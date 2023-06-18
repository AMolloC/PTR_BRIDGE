#include <iostream>
#include "Device.cpp"
#include "RemoteControl.cpp"
#include "AdvanceRemoteControl.cpp"
using namespace std;
class TVBox(
    private
        val service : String) : Device {
private
    var volume : Int = 0
        private var movie : String = ""
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
        throw UnsupportedOperationException("TV Box does not have channels.")
    }

        override fun setChannel(channel : Int) {
        throw UnsupportedOperationException("TV Box does not have channels.")
    }

    fun setMovie(movie: String) {
        this.movie = movie
    }

    fun getMovie() : String{
        return movie
    }
}